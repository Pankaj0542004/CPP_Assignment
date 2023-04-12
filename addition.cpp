#include<iostream>
using namespace std;
class addition
{
	private:

	int a,b,sum;
	public:
		void input()
	{
	   cout<<"Enter the no"<<endl;
	   cin>>a>>b;
	  }
	void calculation()
	 {
	 	sum=a+b;
	 }
	 
	 void output()
	 {
	cout<<"The sum of"<<a<<"and"<<b<<"is"<<sum<<endl;
	}

};
	 	 
int main()
{
	addition add;
	add.input();
	add.calculation();
	add.output();
	
return 0;
}











