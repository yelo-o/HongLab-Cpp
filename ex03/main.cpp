#include <iostream>

using namespace std;

int main() 
{
  int a = 1;
  int b = 2;
  int c = 3;

  // 같은 자료형의 데이터를 저장하기 위해 메모리를 미리 잡아 놓은
  int my_array[3] = {1, 2, 3}; // 초기화할 때는 {} 안에 값 나열

  // 인덱싱 (zero-based)
  cout << my_array[0] << " "
       << my_array[1] << " "
       << my_array[2] << endl; // 1 2 3

  // 인덱싱으로 하나 짜리 변수처럼 사용 가능
  my_array[1] = 5;
  cout << my_array[0] << " "
       << my_array[1] << " "
       << my_array[2] << endl; // 1 5 3

  // cout << my_array[10000] << endl;

  // 문자열은 기본적으로 문자의 배열
  char name[14] = "Hello, World!"; // 문자''와 문자열 "" 구분
  // Null character '\0' <- c 나 c++ 에서는 마지막에 Null character가 추가가 된다.


  cout << name << " " << sizeof(name) << endl;  // 75

  name[10] = 'A';
  name[11] = 'B';
  name[12] = 'C';

  cout << name << endl; 

  name[2] = '\0';

  cout << name << endl; // He

  return 0;
}