#include <iostream>

using namespace std;

int main()
{
	double d;
	int a;
	string s;
	d=3.14;
	a=79;
	s="012^^";

	cout << "원주율은 " << d << "입니다" << endl;
	cout << "우리 " << a << "들" << " " << "사랑해요. "
			<< s; //컴퓨터는 줄이 바뀌어도 세미콜론(;) 까지를 하나의 문장으로 취급한다.
}
