#include <iostream>

using namespace std;

int main()
{
  // [문제] 1 :  평균 점수 출력하기 (float로 변환해서 계산)
  int scores[] = {20, 40, 80, 60, 99};
  float sum = 0;
  int len = sizeof(scores)/sizeof(int);
  for (int i = 0; i < len; i++)
  {
    sum += scores[i];
  }
  cout << sum/len << endl;

  return 0;
}