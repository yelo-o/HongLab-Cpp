#include <iostream>

using namespace std;

int main()
{
  // [문제] 6 : 플로이드의 삼각형
  int cnt = 1;
  // cin >> number;
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << cnt << " ";
      cnt++;
    }
    cout << endl;
  }
  return 0;
}