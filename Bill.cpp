#include <iostream>
using namespace std;

int main()
{
	int disc,bill,ammount;
	cout<<"Enter a Bill"<<endl;
	cin>>bill;
	if(bill>=1000)
	{
		disc=bill*0.10;
		ammount=bill*0.90;
		cout<<"Ammount is:"<<ammount<<endl;
	}
	else
	{
		ammount=bill;
		cout<<"Ammount is"<<ammount<<endl;
	}
}
