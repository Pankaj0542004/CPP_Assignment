// Information of a employee :

#include<iostream>
using namespace std;

class Employee {
    private :
        string name;
        int id;
        float salary;
    public :
        void setdata(){
            cout << "Enter your name : "  << endl;;
            cin >> name;

            cout << "Enter your id : " << endl;
            cin >> id;
            
            cout << "Enter your salary : " << endl;
            cin >> salary; 
        }

        void getdata(){
            cout << "The name of the employee is : " << name << endl;
            cout << "The id of the employee is : " << id << endl;
            cout << "The salary of the employee is : " << salary << endl;
        }
};

int main(){
    Employee obj;
    obj.setdata();
    obj.getdata();
return 0;
}