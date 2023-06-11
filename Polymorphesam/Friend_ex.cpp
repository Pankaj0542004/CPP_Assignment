#include<iostream>
using namespace std;

class test{
    private:
        int a,b;
    public:
        void getdata()
    {
        cout<<"A is :"<<endl;
        cin>>a;

        cout<<"B is :"<<endl;
        cin>>b;
    }
    void show(){
        cout<<a;
        cout<<b;
    }
    friend void operator !(test&obj);

};
void operator !(test&obj){
    obj.a=!obj.b;
    obj.b=!obj.b;
}

int main(){
    test obj1;
    obj1.getdata();
    obj1.show();
    !obj1;
    cout<<"after Overloading..."<<endl;
    obj1.show();
    return 0;

}

/*A is :
22
B is :
5
225after Overloading...*/