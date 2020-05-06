#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<time.h>
#include<ctype.h>
#include<dos.h>
class data
{
 public:
  int a,b,c,d,e,f, hour,min,sec;
  int count;
 void get_time()
  {
  time_t now;
 struct tm *tm_now;
 now=time(NULL);
 tm_now=localtime(&now);
 hour=tm_now->tm_hour;
 min=tm_now->tm_min;
 sec=tm_now->tm_sec;

 }
 void put_time()
 {
 int count;
 do
 {
 count=3;
  cout<<"enter the time in sequence hour: min:sec\n";
 cin>>a>>b>>c;
  cout<<"entered time :"<<a<<":"<<b<<":"<<c<<endl;
  if(a>23)
{
cout<<"invalid hours\n";
 count--;
}
if(b>59)
 {
 cout<<"invalid min\n";
 count--;
}
if(c>59)
 {
 cout<<"invalid seconds\n";
 count--;
}

if(a<0)
{
cout<<"invalid hours\n";
 count--;
}
if(b<0)
 {
 cout<<"invalid min\n";
 count--;
}
if(c<0)
 {
 cout<<"invalid seconds\n";
 count--;
}
if(count!=3)
{
cout<<"TRY AGAIN WITH CORRECT INPUT\n";
}
 }while(count!=3);
  }
  void check_time()
  {
   d=a-hour;
  e=b-min;
  f=c-sec;
   cout<<"current time:"<<hour<<":"<<min<<":"<<sec<<endl;
  cout<<"difference in time "<<d<<":"<<e<<":"<<f<<endl;
}
 };
 void main()
 {
 clrscr();
 data s;
 s.get_time();
 s.put_time();
 s.check_time();
 getch();
 }
