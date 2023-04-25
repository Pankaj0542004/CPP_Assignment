#include<iostream>
using namespace std;
class arith
{
   private:
   int a,b,sum,sub,mul;
   
   public:
   int getdata()
   {
   cout<<"enter the number 1:"<<endl;
   cin>>a;
   cout<<"enter the number 2:"<<endl;
   cin>>b;
   return 0;
   }
   int addition()
   {
   
   
   cout<<"addition is:"<<a+b<<endl;
   return 0;
   }
   int substraction()
   {
   
   cout<<"substraction is:"<<a-b<<endl;
   
   return 0;
   }
   int multiplication()
   {
   
   
   cout<<"multiplication is:"<<a*b<<endl;
   return 0;
   }
   };
   int main()
   { int ch;
   arith a;
   a.getdata();
   cout<<"1.addition\n 2.substraction\n 3.multiplication\n";
   cout<<"enter the choice:"<<endl;
   cin>>ch;
   switch(ch)
  { case 1:
    a.addition();
    break;
    case 2:
    a.substraction();
    break;
    case 3:
    a.multiplication();
    break;
    }
    return 0;
    }
    
