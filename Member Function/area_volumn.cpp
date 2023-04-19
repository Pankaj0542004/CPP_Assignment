#include<iostream>
using namespace std;

class calculate{
    private:
        int area;
        int volumn;
        int l;
        int b;
        int h;
    public:
        int getdata();
        int putdata();
        int display();
};
int calculate::getdata(){
    cout<<"Enter the length :";
    cin>>l;

    cout<<"Enter the breath :";
    cin>>b;

    cout<<"Enter the height :";
    cin>>h;
return 0;

}
int calculate::putdata(){
    area=l*b;
    volumn=l*b*h;
return 0;
}

int calculate::display(){
    cout<<"The area is"<<area<<"The volumn is"<<volumn<<endl;
}


int main(){
    calculate obj;
    obj.getdata();
    obj.putdata();
    obj.display();

 return 0;

}