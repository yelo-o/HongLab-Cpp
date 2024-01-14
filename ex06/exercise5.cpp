#include <iostream>

using namespace std;

int main()
{
  // [문제] 5 :  회문(Palindrome) 검사
  char musik[100];
  cin >> musik;
  int len = strlen(musik);
  cout << len << endl;
  bool flag = true;
  for (int i = 0; i <= len/2; i++)
  {
    if (musik[i] != musik[len - i - 1])
    {
      flag = false;
      break;
    }
  }

  if (flag)
  {
    cout << "True" << endl;
  }
  else 
  {
    cout << "False" << endl;
  }

  return 0;
}