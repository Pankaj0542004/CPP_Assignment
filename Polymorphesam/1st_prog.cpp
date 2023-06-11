#include<iostream>
using namespace std;

class test{
    private:
        int a,b;
    public:
        void show(int x,int y)
    {
        a=x;
        b=y;
        cout<<a;
        cout<<b;
    }

    void show(float x,float y)
    {
        a=x;
        b=y;
        cout<<x;
        cout<<y;
    }
};

int main()
{
    test obj;
    obj.show(37,5);
    obj.show(34,56);
    return 0;
}

//*Output
//3753456