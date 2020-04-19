#include <iostream>
#include <string>
#include <winsock2.h>

using namespace std;

void ShowErrorMessage(string message) {
	cout << "[오류발생]:" << message << "\n";
	system("pause");
	exit(1);
}

int main() {
	WSADATA wsaData;
	SOCKET serverSocket, clientSocket;
	SOCKADDR_IN serverAddress, clientAddress;

	int serverPort = 9876;
	char received[256]; //클라이언트와 주고받을 문자열 버퍼 크기

	//Winsock 초기화. 반환값이 0이 아니면 에러메세지 출력(반환값 0 은 성공)
	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) ShowErrorMessage("WSAStartup()");

	//TCP 소켓 생성
	//PF_INET: IPv4를 사용하겠다고 명시
	//SOCK_STREAM: TCP를 의미
	serverSocket = socket(PF_INET, SOCK_STREAM, 0);

	if (serverSocket == INVALID_SOCKET) ShowErrorMessage("socket()");

	//memset 함수: 어떤 메모리의 시작점부터, 연속된 범위를 어떤값(바이트단위)로 모두 지정하고 싶을 때 사용하는 함수
	//serverAddress를 0으로 초기화
	//sin_family: 어떤 체계를 사용할지 명시(IPv4)
	//htonl(): 4 바이트 정수를, 네트워크 바이트 형식으로(long type)
	//htons(): 2바이트 정수 네트워크 바이트 형식으로(short type), serverPort는 상단에서 2876으로 선언
	memset(&serverAddress, 0, sizeof(serverAddress));
	serverAddress.sin_family = AF_INET;
	serverAddress.sin_addr.s_addr = htonl(INADDR_ANY); 
	serverAddress.sin_port = htons(serverPort);		   
	
	if (bind(serverSocket, (SOCKADDR*)&serverAddress, sizeof(serverAddress)) == SOCKET_ERROR) ShowErrorMessage("bind()");
	cout << "[현재상태]: bind() \n";

	// 동시에 요청가능한 수는 5개로 지정하였음.
	if (listen(serverSocket, 5) == SOCKET_ERROR) ShowErrorMessage("listen()\n");
	cout << "[현재상태]: listen() \n";

	int sizeClientAddress = sizeof(clientAddress);
	clientSocket = accept(serverSocket, (SOCKADDR*)&clientAddress, &sizeClientAddress);
	cout << "[현재상태]: accept() \n";

	if (clientSocket == INVALID_SOCKET) ShowErrorMessage("accept()\n");
	
	while (1) {//클라이언트의 메세지를 받아서 그대로 다시 전달합니다.
		int length = recv(clientSocket, received, sizeof(received), 0);
		received[length] = NULL;
		cout << "[클라이언트 메세지]: " << received << '\n';
		cout << "[메세지 전송]: " << received << '\n';
		if (strcmp(received, "[exit]") == 0) {//strcmp: compare string=> return 0 일때, 두 값이 동일하단 의미
			send(clientSocket, received, sizeof(received) - 1, 0);
			cout << "[서버종료]\n";
			break;
		}
		send(clientSocket, received, sizeof(received) - 1, 0);
	}
	closesocket(clientSocket);
	closesocket(serverSocket);
	WSACleanup();
	system("pause");
	return 0;
}