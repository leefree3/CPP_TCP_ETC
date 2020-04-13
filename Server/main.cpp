#include <iostream>
#include <string>
#include <winsock2.h>

using namespace std;

void ShowErrorMessage(string message) {
	cout << "[�����߻�]:" << message << "\n";
	system("pause");
	exit(1);
}

int main() {
	WSADATA wsaData;
	SOCKET serverSocket, clientSocket;
	SOCKADDR_IN serverAddress, clientAddress;

	int serverPort = 9876;
	char received[256]; //Ŭ���̾�Ʈ�� �ְ���� ���ڿ� ���� ũ��

	//Winsock �ʱ�ȭ. ��ȯ���� 0�� �ƴϸ� �����޼��� ���(��ȯ�� 0 �� ����)
	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) ShowErrorMessage("WSAStartup()");

	//TCP ���� ����
	//PF_INET: IPv4�� ����ϰڴٰ� ���
	//SOCK_STREAM: TCP�� �ǹ�
	serverSocket = socket(PF_INET, SOCK_STREAM, 0);

	if (serverSocket == INVALID_SOCKET) ShowErrorMessage("socket()");

	//memset �Լ�: � �޸��� ����������, ���ӵ� ������ ���(����Ʈ����)�� ��� �����ϰ� ���� �� ����ϴ� �Լ�
	//serverAddress�� 0���� �ʱ�ȭ
	//sin_family: � ü�踦 ������� ���(IPv4)
	//htonl(): 4 ����Ʈ ������, ��Ʈ��ũ ����Ʈ ��������(long type)
	//htons(): 2����Ʈ ���� ��Ʈ��ũ ����Ʈ ��������(short type), serverPort�� ��ܿ��� 2876���� ����
	memset(&serverAddress, 0, sizeof(serverAddress));
	serverAddress.sin_family = AF_INET;
	serverAddress.sin_addr.s_addr = htonl(INADDR_ANY); 
	serverAddress.sin_port = htons(serverPort);		   
	
	if (bind(serverSocket, (SOCKADDR*)&serverAddress, sizeof(serverAddress)) == SOCKET_ERROR) ShowErrorMessage("bind()");
	cout << "[�������]: bind() \n";

	// ���ÿ� ��û������ ���� 5���� �����Ͽ���.
	if (listen(serverSocket, 5) == SOCKET_ERROR) ShowErrorMessage("listen()\n");
	cout << "[�������]: listen() \n";

	int sizeClientAddress = sizeof(clientAddress);
	clientSocket = accept(serverSocket, (SOCKADDR*)&clientAddress, &sizeClientAddress);
	cout << "[�������]: accept() \n";

	if (clientSocket == INVALID_SOCKET) ShowErrorMessage("accept()\n");
	
	while (1) {//Ŭ���̾�Ʈ�� �޼����� �޾Ƽ� �״�� �ٽ� �����մϴ�.
		int length = recv(clientSocket, received, sizeof(received), 0);
		received[length] = NULL;
		cout << "[Ŭ���̾�Ʈ �޼���]: " << received << '\n';
		cout << "[�޼��� ����]: " << received << '\n';
		if (strcmp(received, "[exit]") == 0) {//strcmp: compare string=> return 0 �϶�, �� ���� �����ϴ� �ǹ�
			send(clientSocket, received, sizeof(received) - 1, 0);
			cout << "[��������]\n";
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