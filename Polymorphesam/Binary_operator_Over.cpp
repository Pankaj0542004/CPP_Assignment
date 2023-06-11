#include<iostream>
using namespace std;

class test{
    private:
        int a,b;
    public:
        test()
    {
        a=0;
        b=0;
    }
    test(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<" A is :"<<a;
        cout<<" B is :"<<b;
    }
    test operator +(test&obj){
        test res;
        res.a=a+obj.a;
        res.b=b+obj.b;
        return res;
    }
};

int main(){
    test c1(15,12);
    test c2(33,23);
    test c3;
    c3=c1+c2;
    c3.show();

    return 0;
}

/*A is :48 B is :35*/