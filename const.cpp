#include <iostream>
using namespace std;
class Clock
{
private:
  const int h;  // 常类型成员
  const int m;
  int const s;  // 也可以这么声明
  int x;
public:
  Clock(int a, int b, int c):h(a),m(b),s(c)
  {
    x=99;
    cout<<"Constrctor! Called"<<endl;
  }
  int showTime()
  {
    cout<<h<<":"<<m<<":"<<s<<endl;
    return 0;
  }
  int GetX() const
  {
    // x=100;
    cout<<x<<endl;
    return 0;
  }
};
int main(int argc, const char** argv) {
  Clock A(12,10,30);
  Clock B(14,20,50);
  // A=B;
  //A.ShowTime();
  A.GetX();
  return 0;
}