#include<iostream>
using namespace std;

class test {
    private:
        int a,b;
    public:
        test(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"a is :"<<a<<endl;
        cout<<"b is :"<<b<<endl;
    }
    void operator -()
    {
        a=-a;
        b=-b;
    }
};

int main(){
    test a(10,-34);
    a.show();
    -a;
    a.show(); 
    return 0;

}

/*output
a is :10b is :-34a is :-10b is :34
*/