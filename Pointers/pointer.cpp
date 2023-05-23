// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class test
{
public: 
int a,b; 
void getdata (int a, int b) 
{

this->a = a; 
this->b = b;
}
void putdata()
{
cout << " A is: "<< a; 
cout << " B is: " << b;
}
};
int main()
{
test obj;

obj. getdata(10,20); 
obj. putdata ();

return 0;

}