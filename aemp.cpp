// Information of a employee :

#include<iostream>
using namespace std;

class Employee {
    private :
        char name[20];
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
    Employee obj[3];
    for(int i=0;i<=2;i++)
   {
    	obj[i].setdata();
   }
    for(int j=0;j<=2;j++)
    {
    	obj[j].getdata();
    }
return 0;
}





/*Enter your name : 
pankaj
Enter your id : 
35
Enter your salary : 
500000000000
Enter your name : 
adi
Enter your id : 
12 
Enter your salary : 
542044
Enter your name : 
harshal
Enter your id : 
37
Enter your salary : 
28546414
The name of the employee is : pankaj
The id of the employee is : 35
The salary of the employee is : 5e+11
The name of the employee is : adi
The id of the employee is : 12
The salary of the employee is : 542044
The name of the employee is : harshal
The id of the employee is : 37
The salary of the employee is : 2.85464e+07
*/
