#include <iostream>
using namespace std;
class Clock
{
private:
  int H;
  int M;
  int S;

protected:
  int W;

public:
  Clock()
  {
    cout << "Clock's Constructor Called!" << endl;
  }
  Clock(int h, int m, int s)
  {
    this->H = h;
    this->M = m;
    this->S = s;
    cout << "Clock's Constructor with parameter Called!" << endl;
  }
  ~Clock()
  {
    cout << "Clock's Destructor Called!" << endl;
  }
  int SetTime(int h, int m, int s)
  {
    this->H = h;
    this->M = m;
    this->S = s;
  }
  int ShowTime()
  {
    cout << "Now:" << H << ":" << M << ":" << S << endl;
    return 0;
  }
};
class AlarmClock : public Clock
{
private:
  int AH;
  int AM;

public:
  AlarmClock()
  {
    cout << "AlarmClock's Constructor Called!" << endl;
  }
  AlarmClock(int h, int m, int s) : Clock(h, m, s)
  {
    cout << "AlarmClock's Constructor  with  parameter Called!" << endl;
  }
  ~AlarmClock()
  {
    cout << "AlarmClock's Destructor Called!" << endl;
  }
  int SetAlarm(int AH, int AM)
  {
    this->AH = AH;
    this->AM = AM;
    return 0;
  }
  int ShowAlarm()
  {
    cout << "AlarmTime:" << AH << ":" << AM << endl;
    return 0;
  }
};
int main(int argc, const char **argv)
{
  AlarmClock A;
  A.SetTime(19, 15, 50);
  A.ShowTime();
  A.SetAlarm(5, 30);
  A.ShowAlarm();
  AlarmClock B(8, 10, 30);
  return 0;
}