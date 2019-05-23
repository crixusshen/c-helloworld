#include <iostream>
using namespace std;
class Point
{
private:
  int x, y;
  int *str;

public:
  Point(int x = 0, int y = 0)
  {
    this->x = x;
    this->y = y;
    str = new int[100];
  }
  virtual ~Point()
  {
    delete[] str;
    cout << "Called Point's Destructor and Deleted str!" << endl;
  }
};
class Circle : public Point
{
private:
  int r;
  int *str;

public:
  Circle(int x, int y, int R) : Point(x, y)
  {
    r = R;
    str = new int[100];
  }
  ~Circle()
  {
    delete[] str;
    cout << "Called Circle's Destructor and Deleted str!" << endl;
  }
};

int main()
{

  Point *p;
  p = new Circle(10, 10, 20);
  delete p;

  return 0;
}