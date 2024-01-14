#include <iostream>
#include <random>

using namespace std;

int main() 
{
  // 난수 생성
  // https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> distrib(1, 99); // [1, 99]

  int number = distrib(gen);

  while(1)
  {
    int guess;
    cout << "입력 : ";
    cin >> guess;


    if (guess == number)
    {
      cout << "정답!" << endl;
      break;
    }
    else if ( guess > number)
    {
      cout << "너무 커요!" << endl;
    }
    else if ( guess < number)
    {
      cout << "너무 작아요!" << endl;
    }
  }
  return 0;
}