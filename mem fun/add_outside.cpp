//addition of two num by outside class*//

#include<iostream>
using namespace std;

class arith{
    private:
        int num1;
        int num2;
        int sum;
    public:
        int getdata(){
            cout<<"Enter First no:";
            cin>>num1;

            cout<<"Enter second no:";
            cin>>num2;

            return 0;
        }
    int putdata(){
        sum= num1+ num2;
        cout<<sum<<endl;
        return 0;
    }
};

int main(){
    arith a;
    a.getdata();
    a.putdata();
    return 0;

}