#include <iostream>

using namespace std;

int main()
{
  // [문제] 3 :  계절 판별하기
  // 1 이상 12 이하의 정수를 입력 받아서 계절을 출력
  int number;
  cin >> number;
  if (number >= 3 && number <= 5)
  {
    cout << number << "월은 봄입니다." << endl;
  }
  else if (number >= 6 && number <= 8)
  {
    cout << number << "월은 여름입니다." << endl;
  }
  else if (number >= 9 && number <= 11)
  {
    cout << number << "월은 가을입니다." << endl;
  }
  else
  {
    cout << number << "월은 겨울입니다." << endl;
  }

  return 0;

}
