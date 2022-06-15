#include <iostream>

using namespace std;

int main()
{
	char a;
	int c,d;
	int r;

	cin >> c >> d;
	cin >> a;

	if(a=='a')
	{
		r=c+d;
	}
	else if(a=='s')
	{
		r=c-d;
	}
	else if(a=='m')
	{
		r=c*d;
	}
	else if(a=='d')
	{
		r=c/d;
	}
	else
	{
		cout << "잘못된 사칙연산 코드가 입력되었습니다.";
	}
	cout << r;
}
