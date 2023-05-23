#include<iostream>
using namespace std;
int main(){
    int a,b,*p,*q,sum;

    cout<<"Enter the number:"<<endl;
    cin>>a;

    cout<<"Enter the number:"<<endl;
    cin>>b;
    
    p=&a;
    q=&b;

    sum=*p+*q;

    cout<<"sum of two no:"<<sum<<endl;

    return 0;


}