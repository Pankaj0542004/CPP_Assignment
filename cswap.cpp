//cpp program to swap two no using class*//


#include<iostream>
using namespace std;
class number
{
  private:
  int n1,n2;
  int temp;
  
  public:
  int var() 
  { 
    
  
   cout<<"\nenter the first number:";
   cin>>n1;
   
   cout<<"\nenter the second number:";
   cin>>n2;
   
   return 0;
   }
   
   int display()
   {
    
    cout<<"\n------------";
    
    cout<<"\nbefore swapping";
    cout<<"\nthe first number is:"<<n1;
    cout<<"\nthe second number is:"<<n2;
    
    return 0;
   }

   int display1()
   {
   
    cout<<"\n------------";
    cout<<"\nafter swapping";
        
     temp=n1;
     n1=n2;
     n2=temp;
     
     cout<<"\nthe first number is:"<<n1;
     cout<<"\nthe second number is:"<<n2;
     
     return 0;
   }
   
 };
 
 int main()
 { 
   number obj;
   obj.var();
   obj.display();
   obj.display1();
   return 0;
 }
 
 /*pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2-30-c++$ g++ cswap.cpp
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2-30-c++$ ./a.out

enter the first number:5

enter the second number:4

------------
before swapping
the first number is:5
the second number is:4
------------
after swapping
the first number is:4
the second number is:5pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B2-30-c++$*/
