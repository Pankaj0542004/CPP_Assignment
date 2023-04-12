
#include<iostream>
using namespace std;
class employee
{
  private:
  int id;
  char name[20];
  int salary;
  
  public:
  int info()
  {
    cout<<"\nenter the id of employee:";
    cin>>id;
    
    cout<<"\nenter the name of employee:";
    cin>>name; 
    
    cout<<"\nenter the salary of employee:";
    cin>>salary;
    
    return 0;
  } 
  
  int emp()
  { 
    
    
    cout<<id<<"\t\t"<<name<<"\t\t"<<salary<<"\t\n";
     
    
    return 0;
    
  }
};

int main()
{
 employee obj[3];
 
 for(int i=0;i<=2;i++)
 {
  obj[i].info();
  }
  
  cout<<"\nthe information of employee \n"; 
  cout<<" id\t\t"<<"name \t"<<"salary\t\n";
 for(int i=0;i<=2;i++)
 {
  obj[i].emp();
  }
 return 0;
}
