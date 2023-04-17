

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
            cout << "Enter players name : "  << endl;
            cin >> name;

            cout << "Enter player team name  : " << endl;
            cin >> team_name;
            
            cout << "Enter batting avg : " << endl;
            cin >> batting_avg; 
        }

        int getdata()
        {
            cout << "The name of the player is : " << name << endl;
            cout << "The name of team player is : " << team_name << endl;
            cout << "The batting avg is : " << batting_avg << endl;
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
    
    for(i=0;i<=4;i++)
    {
    player[i].setdata();
    }
    
return 0;
}


/*Enter players name : 
pAJD
Enter player team name  : 
SASAD
Enter batting avg : 
5532
Enter players name : 
FDG
Enter player team name  : 
DSFS
Enter batting avg : 
555
Enter players name : 
DFG
Enter player team name  : 
SDG
Enter batting avg : 
44
Enter players name : 

FGSDRFG
Enter player team name  : 
GFD
Enter batting avg : 
44
Enter players name : 
GD
Enter player team name  : 
GDG
Enter batting avg : 
4
Enter players name : 
G
Enter player team name  : 
44GD4S
Enter batting avg : 
4GDS
Enter players name : 
Enter player team name  : 
G4G4
Enter batting avg : 
G4D
Enter players name : 
Enter player team name  : 
Enter batting avg : 
Enter players name : 
Enter player team name  : 
Enter batting avg : 
Enter players name : 
Enter player team name  : 
Enter batting avg : */
