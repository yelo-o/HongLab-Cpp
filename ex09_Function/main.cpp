#include <iostream>

using namespace std;

// 함수 (선언과 정의 분리 가능)
int Add(int a, int b);

// 반환 자료형이 지정되지 않음
void Add (int a, int b, int *c, int *d) // 반환값을 여러개 받고 싶을 때 포인터로 매개변수를 받을 수 있다.
{
  *c = a + b;
  *d = a - b;
}

int main()
{
  cout << Add(1, 2) << endl;

  int sum;
  int sub;
  Add(4, 5, &sum, &sub);

  cout << sum << " " << sub << endl;
  return 0;
}

int Add (int a, int b)
{
  return a + b; // 반환값
}