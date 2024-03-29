#include <iostream>
#include <boost/asio.hpp>
#include <boost/array.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

using boost::asio::ip::tcp;
using namespace std;


/*

// C++ Boost.Asio Hello World 예제
int main()
{
	boost::asio::io_service io;
	boost::asio::deadline_timer t(io, boost::posix_time::seconds(5));
	t.wait();
	std::cout << "Hello, world!" << std::endl;
	system("pause");
	return 0;
}

*/


/*

// 클라이언트(Client) 프로그램 ①
// #include <iostream>
// #include <boost/array.hpp>
// #include <boost/asio.hpp>

// using boost::asio::ip::tcp;
// using namespace std;

// 클라이언트(Client) 프로그램 ②
int main()
{
	try
	{
		// 기본적으로 Boost Asio 프로그램은 하나의 IO Service 객체를 가집니다.
		boost::asio::io_service io_service;

		// 도메인 이름을 TCP 종단점으로 바꾸기 위해 Resolver를 사용합니다.
		tcp::resolver resolver(io_service);

		// 서버로는 로컬 서버, 서비스는 Daytime 프로토콜을 적어줍니다.
		// tcp::resolver::query query("localhost", "daytime");
		tcp::resolver::query query("0.tcp.jp.ngrok.io", "14346");

		// DNS를 거쳐 IP 주소 및 포트 번호를 얻어옵니다.
		tcp::resolver::iterator endpoint_iterator = resolver.resolve(query);

		// 소켓 객체를 초기화하여 서버에 연결합니다.
		tcp::socket socket(io_service);
		boost::asio::connect(socket, endpoint_iterator);

// 클라이언트(Client) 프로그램 ③
		while (1) {
			// 버퍼 및 오류 처리 변수를 선언합니다.
			boost::array<char, 128> buf;
			boost::system::error_code error;

			// 버퍼를 이용해 서버로부터 데이터를 받아옵니다.
			size_t len = socket.read_some(boost::asio::buffer(buf), error);
			if (error == boost::asio::error::eof)
				break;
			else if (error)
				throw boost::system::system_error(error);

			// 버퍼에 담긴 데이터를 화면에 출력합니다.
			cout.write(buf.data(), len);
		}
	}
	catch (exception& e) {
		cerr << e.what() << endl;
	}
	system("pause");
	return 0;
}

*/

