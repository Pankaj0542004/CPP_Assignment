#include<iostream>
using namespace std;

class cricket 
{
    private :
        char name[20];
        char team_name[20];
        int batting_avg;
    public :
        int setdata()

        {
            
            cout << "Enter players name : ";
            cin >> name;

            
            cout << "Enter player team name  : ";
            cin >> team_name;
            
           
            cout << "Enter batting avg : ";
            cin >> batting_avg; 
            
            return 0;
            
        }

        int getdata()
        {
            cout<<name<<"\t"<<"\t"<<team_name<<"\t"<<"\t"<<batting_avg<<"\t\n";
            
            return 0;
            
        }
};

int main()
{
    cricket player[5];
    int i;
    
    for(i=0;i<=4;i++)
    {
    player[i].setdata();
    }
     
     cout<<"name"<<"\t\t"<<"team_name"<<"\t"<<"batting_avg"<<"\t\n";
     
    for(i=0;i<=4;i++)
    {
    player[i].getdata();
    }
    
return 0;
}
