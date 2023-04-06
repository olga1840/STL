#include<iostream>
using namespace std;

//#define EXCEPTION_BASICS
void main()
{
	setlocale(LC_ALL, "");
	
#ifdef EXCEPTION_BASICS
	try
	{
		//throw 1;
		//throw "Something went wrong"; // ключевое слово throw (бросить) бросает исключение
		throw std::exception("STD exception thrown");
	}
	catch (int e)
	{
		std::cerr << "Error #" << e << std::endl;
	}
	catch (const char* e)
	{
		std::cerr << "Error: " << e << endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << endl;
		//Метод what() возвращает сообщение об ошибке в виде C-string (const char*)
	}
	cout << "Final" << endl;
#endif // EXCEPTION_BASICS

	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	try
	{
		cout << a / b << endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << endl;
	}
	catch (...)
	{
		std::cerr << "Something went wrong" << endl;
	}
}