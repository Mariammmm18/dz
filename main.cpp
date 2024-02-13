#include<iostream>
#include<cassert>

int sum(int a, int b)
{
  return a + b;
}

void 
{
  std::cout << "wrong";
  assert(sum(5,5) == 5);
}
void RightAnswer()
{
  std::cout << "succesful";
  assert(sum(5,5) == 10);
}

int main()
{
  WrongAnswer();
  RightAnswer();
}
