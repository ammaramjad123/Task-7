#include <iostream>
using namespace std;
class teacher {
public:
	int n;
	teacher() // Default Constructor //
	{
		n = 10;
		cout << "My name is ammar :" << n << '\n';
	}

	teacher(int a) // Parameterized Constructor //		
	{
		cout << a << endl;
	}

	teacher(int b,char c) // Parameterized Constructor //		
	{
		cout << b << endl;
		cout << c << endl;
	}

	~teacher()
	{

		cout << "constructor is destroyed :";
		cout << n;
	}


};