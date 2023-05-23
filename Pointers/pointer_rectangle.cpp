#include<iostream>
using namespace std;

class area{
    public:
    float l,b;
    int getdata()
    {
        cout<<"Enter lenght:";
        cin>>l;
        cout<<"Enter Breath:";
        cin>>b;

        return 0;
    }
    int putdata()
    {
       int area;
        area=l*b;
        cout<<"Area is "<<area<<endl; 
    }
};

int main(){
    area a;
    area*ptr;
    ptr->getdata();
    ptr->putdata();

return 0;
}

/*Enter lenght:24
Enter Breath:35
Area is 840*/