# include <iostream>

using namespace std;

int main()
{
  int a = 123;
  // address of 주소 연산자 &
  cout << a << " " << &a << endl;

  // 참고 : 파이썬 id()와 비교
  int *b = &a; // b에 a 주소 대입

  // defrence operator (역참조 연산자)
  cout << *b << " " << b << endl;

  *b = 567;

  cout << a << " " << b << " " << *b << endl; // 567 a의 주소 567

  // 포인터 자체의 주소 크기와 자료형의 크기 (주소의 크기는 항상 동일하다)
  double *c = nullptr; // 아무 주소도 가르키고 있지 않다는 의미로 초기화 (nullptr 대신에 0도 사용가능)
  cout << sizeof(int) << " " << sizeof(double) << endl; // 4 8
  cout << sizeof(int *) << " " << sizeof(double *) << endl; // 
  cout << sizeof(b) << " " << sizeof(c) << endl;

  // 포인터 연산과 배열

  // size_t 안내 (여기서는 주소를 10진수로 변환 용도)
  cout << sizeof(size_t) << endl;
  cout << size_t(b) << " " << size_t(b + 1) << " " << size_t(b + 2) << endl;
  cout << size_t(c) << " " << size_t(c + 1) << " " << size_t(c + 2) << endl;

  // char에 대해서 퀴즈 내기 (확인도 직접 해보세요)
  // sizeof(char) == 1 입니다. char* e = 0; e + 15 는 몇일까요?
  // char* e = 0;
  // cout << e + 15 << endl;

  // 문자열, 배열 연결시키기
  int my_array[] = {23, 38, 56, 69, 74};

  char my_str[] = {'h', 'e', 'l', 'l', 'o', '\n'};

  char *ptr = my_str; // 배열의 이름은 포인터

  cout << *(ptr + 4) << endl;
  cout << ptr[4] << endl;

  return 0;
}