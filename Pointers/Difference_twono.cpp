#include<iostream>
using namespace std;
int main(){
    int a,b,*p,*q,sub;
    cout<<"Enter the number:";
    cin>>a;
    cout<<"Enter the number:";
    cin>>b;
    p=&a;
    q=&b;

    sub=*p-*q;

    cout<<"Difference between two no:"<<sub<<endl;

    return 0;
}

/*Enter the number:55
Enter the number:12
Difference between two no:43
*/