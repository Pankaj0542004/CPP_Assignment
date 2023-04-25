#include<iostream>
using namespace std;
class arith
{
     private:
     int num1,num2,sum;
     
     public:
     int getdata();
     int putdata();
     
};
   int arith::getdata()
{
   cout<<"enter the number 1:"<<endl;
   cin>>num1;
   
   cout<<"enter the number 2:"<<endl;
   cin>>num2;
   return 0;
}
   int arith::putdata()
{  
   cout<<"sum is:"<<num1+num2<<endl;
   return 0;
}
   int main()
{
   arith a;
   a.getdata();
   a.putdata();
   return 0;
}
