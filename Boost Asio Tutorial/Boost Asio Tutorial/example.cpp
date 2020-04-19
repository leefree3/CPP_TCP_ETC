#include <iostream>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
/*
int main() {
	//5초 후 입력 실행되는 Boost Asio 대표 예제
	//이게 잘 되면 Boost Asio 라이브러리 잘 설치 된거~~
	//난 visual studio 2019 사용중이라, msvc14.2 버전으로 설치함.
	//설치 자료는 evernote로 필기
	boost::asio::io_service io;
	boost::asio::deadline_timer t(io, boost::posix_time::seconds(5));
	t.wait();

	std::cout << "Hello, world!" << std::endl;

	system("pause");
	return 0;
}
*/