#include <iostream>
using namespace std;
class Grandfather
{
public:
  int key;
};
class Father1 : virtual public Grandfather
{
};
class Father2 : virtual public Grandfather
{
};
class Grandson : public Father1, public Father2
{
};

int main(int argc, const char **argv)
{
  Grandson A;
  A.key = 9;  // 使用virtual修饰就不会存在 “二义性”
  return 0;
}