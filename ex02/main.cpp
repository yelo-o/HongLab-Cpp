#include <iostream> // iostream이라는 헤더를 포함

using namespace std; // 네임스페이스 설명 std::cout

int main() // entry point
{
  int i; // 변수 정의 int : 4 byte
  i = 123; // 변수에 값 지정 (객체 레퍼런스 아님)
  
  // sizeof 소개
  cout << i << " " << sizeof(i) << endl; // 123 4

  cout << sizeof(int) << endl; // 4

  cout << 123 + 4 << " " << sizeof(123 + 4) << endl;

  float f = 123.456f; // 마지막 f 주의 (4byte)
  double d = 123.456; // f 불필요 (8byte)

  cout << f << " " << sizeof(f) << endl; //123.456 4
  cout << f << " " << sizeof(d) << endl; //123.456 8

  // C++는 글자 하나와 문자열을 구분합니다.
  char c = 'a';
  char str[] = "Hello, World!"; // std::string 으로 사용할 수도 있으나, 기본적으로 char의 배열이라는 형태는 알아야 함

  cout << c << " " << sizeof(c) << endl; // a 1 


  // 형변환
  i = 987.654; // double을 int에 강제로 저장
  cout << "int from double " << i << endl;
  // 987 (버림)

  f = 567.89; // 이것도 형변환

  // 기본 연산자
  // i = 987;
  i += 100; // i = i + 100;
  i++;
  cout << i << endl; // 1088

  // 불리언
  bool is_good = true;
  is_good = false;

  cout << is_good << endl; // 0

  cout << boolalpha << true << endl; // true
  cout << is_good << endl; // false
  cout << noboolalpha << true << endl; // 1

  cout << boolalpha;
  cout << (true && true) << endl; // true
  cout << (true || false) << endl; // true

  // 비교

  cout << (1 > 3) << endl; // false
  cout << (3 == 3) << endl; // true
  cout << (i >= 3) << endl; // true
  cout << ('a' != 'c') << endl; // true
  cout << ('a' != 'a') << endl; // false

  // 영역(scope)
  
  i = 123; // 더 넓은 영역
  {
    int i = 345; // 더 좁은 영역의 다른 변수
    cout << i << endl; // 345
  }
  cout << i << endl; // 123

  return 0;
}