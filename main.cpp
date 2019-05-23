#include<iostream>
#include<iomanip>
#include<cstring>
#include<math.h>
using namespace std;
class Point
{
    private:
        double x;
        double y;
    public:
        Point(double a,double b)
        {
            x = a;
            y = b;
        }
        int GetPoint()
        {
            cout<<"("<<x<<","<<y<<")";
            return 0;
        }
        friend double Distance(Point &a,Point &b);
        friend class Tool;
};
//求两点之间的距离
double Distance(Point &a,Point &b)
{
    double xx;
    double yy;
    xx = a.x-b.x;
    yy = a.y-b.y;
  
    return sqrt(xx*xx+yy*yy);
}
class Tool
{
  public:
    double GetX(Point &A)
    {
      cout<<A.x<<endl;
      return A.x;
    }
    double GetY(Point &A)
    {
      cout<<A.y<<endl;
      return A.y;
    }
    double dis(Point &A)
    {
      cout<<sqrt(A.x*A.x+A.y*A.y)<<endl;
      return  sqrt(A.x*A.x+A.y*A.y);
    }
};
int main()
{
    Point A(2.0,3.0);
    // Point B(1.0,2.0);
    // double dis;
    // dis = Distance(A,B);
    // cout<<dis<<endl;

    Tool T;
    T.GetX(A);
    T.GetY(A);
    T.dis(A);
    return 0;
}