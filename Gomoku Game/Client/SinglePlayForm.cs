using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Client
{
    public partial class SinglePlayForm : Form
    {
        private const int rectSize = 33; //오목판 셀 크기
        private const int edgeCount = 15; // 오목판 선 갯수

        private enum Horse { none = 0, BLACK, WHITE};
        private Horse[,] board = new Horse[edgeCount, edgeCount]; // 2차원 배열 (15*15)
        private Horse nowPlayer = Horse.BLACK; //초기값(시작) 검정돌

        private bool playing = false;

        public SinglePlayForm()
        {
            InitializeComponent();
        }

        private void boardPicture_MouseDown(object sender, MouseEventArgs e)
        {
            if (!playing)
            {
                MessageBox.Show("게임을 실행해 주세요.");
                return;
            }

            Graphics g = this.boardPicture.CreateGraphics();
            //오목판의 셀 크기로 이벤트 발생지점을 나눠줌으로써, 몇번째 줄인지 구할 수 있다. (0~14)
            int x = e.X / rectSize; 
            int y = e.Y / rectSize;
            if(x<0||y<0 || x>=edgeCount || y >= edgeCount)
            {
                MessageBox.Show("테두리를 벗어날 수 없습니다.");
                return;
            }
            if (board[x, y] != Horse.none) return;
            board[x, y] = nowPlayer;
            //MessageBox.Show(x + ", " + y);
            if(nowPlayer == Horse.BLACK)
            {
                //FillEllipse : 원형 모양 채우기
                SolidBrush brush = new SolidBrush(Color.Black);
                g.FillEllipse(brush, x * rectSize, y * rectSize, rectSize, rectSize);
            }
            else
            {
                SolidBrush brush = new SolidBrush(Color.White);
                g.FillEllipse(brush, x * rectSize, y * rectSize, rectSize, rectSize);
            }
            if (judge())
            {
                status.Text = nowPlayer.ToString() + "플레이어가 승리했습니다.";
                playing = false;
                playButton.Text = "게임시작";
            }
            else
            {
                nowPlayer = ((nowPlayer == Horse.BLACK) ? Horse.WHITE : Horse.BLACK);
                status.Text = nowPlayer.ToString() + " 플레이어의 차례입니다.";
            }
        }

        private void boardPicture_Paint(object sender, PaintEventArgs e)
        {
            //오목판 그리기 이벤트 함수
            Graphics gp = e.Graphics;
            Color lineColor = Color.Black; //오목판의 선 색
            Pen p = new Pen(lineColor, 2);
            gp.DrawLine(p, rectSize / 2, rectSize / 2, rectSize / 2, rectSize * edgeCount - rectSize / 2);//좌측
            gp.DrawLine(p, rectSize / 2, rectSize / 2, rectSize * edgeCount - rectSize / 2, rectSize / 2);//상측
            gp.DrawLine(p, rectSize / 2, rectSize * edgeCount - rectSize / 2, rectSize * edgeCount - rectSize / 2, rectSize * edgeCount - rectSize / 2);//하측
            gp.DrawLine(p, rectSize * edgeCount - rectSize / 2, rectSize / 2, rectSize * edgeCount - rectSize / 2, rectSize * edgeCount - rectSize / 2);//우측
            p = new Pen(lineColor, 1);

            // 대각선 방향으로 이동하면서 십자가 모양 선 그리기
            for (int i = rectSize + rectSize / 2; i < rectSize * edgeCount - rectSize / 2; i += rectSize)
            {
                gp.DrawLine(p, rectSize / 2, i, rectSize * edgeCount - rectSize / 2, i);
                gp.DrawLine(p, i, rectSize / 2,i, rectSize * edgeCount - rectSize / 2 );
            }
        }

        private bool judge()// 승리 판정함수
        {   //가로 5 알이 현재 플레이어와 같을 경우
            //판정 메서드
            for (int i = 0; i < edgeCount - 4; i++)
                for (int j = 0; j < edgeCount; j++)
                    if (board[i, j] == nowPlayer && board[i + 1, j] == nowPlayer && 
                        board[i + 2, j] == nowPlayer && board[i + 3, j] == nowPlayer && board[i + 4, j] == nowPlayer)
                        return true;
            //세로 5 알이 현재 플레이어와 같을 경우
            for (int i = 0; i < edgeCount ; i++)
                for (int j = 4; j < edgeCount; j++)
                    if (board[i, j] == nowPlayer && board[i, j-1] == nowPlayer && 
                        board[i, j-2] == nowPlayer && board[i, j-3] == nowPlayer && board[i, j-4] == nowPlayer)
                        return true;
            //y = x 직선
            for (int i = 0; i < edgeCount -4 ; i++)
                for (int j = 0; j < edgeCount -4; j++)
                    if (board[i, j] == nowPlayer && board[i+1, j+1] == nowPlayer && 
                        board[i+2, j+2] == nowPlayer && board[i+3, j+3] == nowPlayer && board[i+4, j+4] == nowPlayer)
                        return true;
            //y = -x 직선
            for (int i = 4; i < edgeCount ; i++)
                for (int j = 0; j < edgeCount - 4; j++)
                    if (board[i, j] == nowPlayer && board[i - 1, j + 1] == nowPlayer &&
                        board[i - 2, j + 2] == nowPlayer && board[i - 3, j + 3] == nowPlayer && board[i - 4, j + 4] == nowPlayer)
                        return true;
            return false;
        }

        private void refresh()
        {
            //초기화
            this.boardPicture.Refresh();
            for (int i = 0; i < edgeCount; i++)
                for (int j = 0; j < edgeCount; j++)
                    board[i, j] = Horse.none;
        }

        private void playButton_Click(object sender, EventArgs e)
        {
            //게임시작버튼 클릭
            if (!playing)
            {
                refresh();
                playing = true;
                playButton.Text = "재시작";
                status.Text = nowPlayer.ToString() + " 플레이어의 차례입니다.";
            }
            else
            {
                refresh();
                status.Text = "게임이 재시작되었습니다.";
            }
        }
    }
}
