#include <iostream>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
/*
int main() {
	//5�� �� �Է� ����Ǵ� Boost Asio ��ǥ ����
	//�̰� �� �Ǹ� Boost Asio ���̺귯�� �� ��ġ �Ȱ�~~
	//�� visual studio 2019 ������̶�, msvc14.2 �������� ��ġ��.
	//��ġ �ڷ�� evernote�� �ʱ�
	boost::asio::io_service io;
	boost::asio::deadline_timer t(io, boost::posix_time::seconds(5));
	t.wait();

	std::cout << "Hello, world!" << std::endl;

	system("pause");
	return 0;
}
*/