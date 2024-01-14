#include <iostream>

using namespace std;

int main()
{
  // [문제] 4 :  구구단 출력
  int number;
  cin >> number;
  for (int i = 1; i <= 9; i++)
  {
    cout << number << " x " << i << " = " << number * i << endl;
  }
  return 0;
}