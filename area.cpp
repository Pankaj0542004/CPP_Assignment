// Area and circumference of the circle : 

#include<iostream>
using namespace std;

class circle{
    public : 
    float r;
        void getdata(){
            cout << "Enter the radius : " ;
            cin >> r;
        }

        void area(){
            float pi = 3.14;
            float area_is;
            area_is = pi * r * r;
            cout << "The area of the circle is : " << area_is << endl;
        }

        void circumference(){
            float pi = 3.14;
            float circumference_is;
            circumference_is = 2 * pi * r;
            cout << "The circumference of the circle is : " << circumference_is << endl;
        }
};

int main(){
    circle obj;
    obj.getdata();
    obj.area();
    obj.circumference();
return 0;
}   