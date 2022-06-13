#include <iostream>

int main()
{
	using namespace std;

	cout << "구매금액을 입력하세요.\n";
	
	int caltot,calpoint; //C는 변수를 가장 처음에 정의해줘야 하지만, C++은 중간에 정의해도 상관없음
	cin >> caltot;
	calpoint=caltot*0.01; //1% 포인트 적립 계산
	cout << "금회 발생 포인트=" << calpoint << "점 입니다.\n";
	return 0;
}
