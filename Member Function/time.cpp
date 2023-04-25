#include<iostream>
using namespace std;
class t
{
  private:
  int hour,min,sec;
  public:
  int getdata();
  int putdata();
  
};
int t::getdata()
    {
        cout<<"enter the time:"<<endl;
        cout<<"enter time in seconds:"<<endl;
        cin>>sec;
        cout<<"enter time in minutes:"<<endl;
        cin>>min;
        cout<<"enter time in hour:"<<endl;
        cin>>hour;
        return 0;
    }
int t::putdata()
    {
        cout<<"time in second is:"<<sec<<endl;
        cout<<"time in minutes is:"<<min<<endl;
        cout<<"time in hour is:"<<hour<<endl; 
        return 0;
    }
int main()
    { 
        t t1,t2;
        t1.getdata();
        t2.getdata();
        return 0;
    }