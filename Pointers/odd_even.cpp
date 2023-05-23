#include<iostream>
using namespace std;
int main(){
    int num1,*p;
    cout<<"Enter the num:";
    cin>>num1;

    p=&num1;
    if(*p%2==0){
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
return 0;
}


/*Enter the num:545
odd
*/