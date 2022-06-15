#include <iostream>

using namespace std;

int main()
{
	string a,b; //spider,bird 비교시 앞글자가 큰 spider 출력되고, spin,spider 비교시 n과 d중 큰 spin이 출력된다
	cin >> a >> b;
	if(a<b)
	{
		cout << b << endl;
	}
	if(b<a)
	{
		cout << a << endl;
	}
}
