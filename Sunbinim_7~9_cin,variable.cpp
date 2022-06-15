#include <iostream>

using namespace std;

int main()
{
	int b=1; //변수는 초기화를 하고 사용해야함
	cin >> b;
	cout << b << endl;

	double d; //계산 과정에 실수가 있으면 결과는 실수가 나옴
	cin >> d;
	cout << d << endl;

	char c;
	cin >>c;
	cout << c << endl;

	string s;
	cin >> s;
	cout << s << endl;
	
	int a,b,c,d,e;
	cin >> a >> b >> c >> d >> e; //한번에 입출력 가능
	cout << a << b << c << d << e;

	double a;
	int l,k;
	l=14,k=5;
	a=(double)l/k; //잠시 자료형 변경 가능
	cout << a;

	return 0;
}
