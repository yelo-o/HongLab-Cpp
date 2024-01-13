#include <iostream>

using namespace std;

int main()
{
  // [문제] 2 :  제곱의 합
  // for문을 이용해서 1부터 100까지 숫자들의 제곱의 합을 구하세요.
  int sum = 0;
  for (int i = 1; i <= 100; i++)
  {
    sum += i * i;
  }
  cout << sum << endl;

  return 0;

}
