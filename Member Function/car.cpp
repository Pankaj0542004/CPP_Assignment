#include<iostream>
using namespace std;
class car
{
   private:
   char  car_name[20],engine_name[20];
   int price;
   float milage;
   
   public:
   
   int getdata();
   int putdata();
};
int car::getdata()
    { 
        cout<<"enter the car name:"<<endl;
        cin>>car_name;
        
        cout<<"enter the engine name:"<<endl;
        cin>>engine_name;
        
        cout<<"enter the price:"<<endl;
        cin>>price;
        
        cout<<"enter the milage:"<<endl;
        cin>>milage;
        return 0;
    }
 int car::putdata()
    {
        cout<<"the car name is:"<<car_name<<endl;
        cout<<"the engine name is:"<<engine_name<<endl;
        cout<<"the price of car is:"<<price<<endl;
        cout<<"the milage of car is:"<<milage<<endl;
        return 0;
    } 
 int main()
   { 
        int i;
        car c;
        c.getdata();
        c.putdata();
        return 0;
   }
