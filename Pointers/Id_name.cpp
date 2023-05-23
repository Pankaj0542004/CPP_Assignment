#include<iostream>
using namespace std;
class test{
    public:
    int id;
    string name;
    int getdata()
    {
        cout<<"Enter the id:";
        cin>>id;
        cout<<"Enter the name:";
        cin>>name;
        return 0;
    }
    int putdata()
    {
        cout<<"id:"<<id<<endl;
        cout<<"name:"<<name<<endl;
        return 0;
    }
};

int main(){
    test t1;
    test*ptr;
    ptr=&t1;
    ptr->getdata();
    ptr->putdata();

    return 0;
}

/*
Enter the id:55
Enter the name:Jadu
id:55
name:Jadu*/