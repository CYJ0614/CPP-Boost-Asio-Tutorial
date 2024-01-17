#include <iostream>
#include <boost/asio.hpp>
#include <boost/array.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

using boost::asio::ip::tcp;
using namespace std;


/*

// C++ Boost.Asio Hello World ����
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

// Ŭ���̾�Ʈ(Client) ���α׷� ��
// #include <iostream>
// #include <boost/array.hpp>
// #include <boost/asio.hpp>

// using boost::asio::ip::tcp;
// using namespace std;

// Ŭ���̾�Ʈ(Client) ���α׷� ��
int main()
{
	try
	{
		// �⺻������ Boost Asio ���α׷��� �ϳ��� IO Service ��ü�� �����ϴ�.
		boost::asio::io_service io_service;

		// ������ �̸��� TCP ���������� �ٲٱ� ���� Resolver�� ����մϴ�.
		tcp::resolver resolver(io_service);

		// �����δ� ���� ����, ���񽺴� Daytime ���������� �����ݴϴ�.
		tcp::resolver::query query("localhost", "daytime");

		// DNS�� ���� IP �ּ� �� ��Ʈ ��ȣ�� ���ɴϴ�.
		tcp::resolver::iterator endpoint_iterator = resolver.resolve(query);

		// ���� ��ü�� �ʱ�ȭ�Ͽ� ������ �����մϴ�.
		tcp::socket socket(io_service);
		boost::asio::connect(socket, endpoint_iterator);

// Ŭ���̾�Ʈ(Client) ���α׷� ��
		while (1) {
			// ���� �� ���� ó�� ������ �����մϴ�.
			boost::array<char, 128> buf;
			boost::system::error_code error;

			// ���۸� �̿��� �����κ��� �����͸� �޾ƿɴϴ�.
			size_t len = socket.read_some(boost::asio::buffer(buf), error);
			if (error == boost::asio::error::eof)
				break;
			else if (error)
				throw boost::system::system_error(error);

			// ���ۿ� ��� �����͸� ȭ�鿡 ����մϴ�.
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

