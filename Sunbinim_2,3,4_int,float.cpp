#include <iostream>

using namespace std;

int main()
{
	int a;
	a=1;
	cout << a << endl;

	long long int i;
	i=90000000000;
	cout << i << endl;

	float f; //float은 소수점 아래 6자리까지만 표시 가능
	f=1.1235567;
	cout << f << endl;
	cout.precision(5); //전체 출력범위 5자리로
	cout << f << endl;
	cout << fixed; //소수점 아래 출력범위 5자리로
	cout.precision(5);
	cout << f << endl;

	double d;
	d=1.32131;
	cout << d << endl;
	cout.unsetf(ios::fixed); //위의 출력범위 설정(소수점 아래 출력범위 5자리로) 해제
	cout << d << endl;
	cout.setf(ios::fixed); //소수점 아래 출력범위 5자리로(fixd랑 같은것)
	cout.precision(5);
	cout << d << endl;
	return 0;
}
