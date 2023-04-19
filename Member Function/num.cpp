#include<iostream>
using namespace std;

class no{
    public:
        int val1;
        int val2;
        int val3;

        void int_val(int a,int b,int c){
            val1 =a;
            val2 =b;
            val3 =c;
           
        }
    int printval(){
        cout<<"Addtion is"<<val1+val2+val3<<endl;
        return 0;
    }
};

int main(){
    no ex;
    ex.int_val(3,5,3);
    ex.printval();
    
    return 0;
}

