#include<iostream>
using namespace std;

class student{
    public:
        int id;
        string name;
    void getdata(int id,string name)
    {
        this->id=id;
        this->name=name;
    }
    void putdata()
    {
        cout<<"\n A is "<<id;
        cout<<"\n B is "<<name;
    }
};

int main(){
    student obj;
    obj.getdata(256,"jadu");
    obj.putdata();

    return 0;
}

/*A is 256
 B is jadu*/