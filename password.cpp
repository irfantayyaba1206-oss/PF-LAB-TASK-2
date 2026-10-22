#include <iostream>
using namespace std;

int main()
{
	int speed;
	cout<<"Enter a speed"<<endl;
	cin>>speed;
	if(speed<=60)
	{
		cout<<"SAFE"<<endl;
	}
	else 
	{
		cout<<"over speed limit"<<endl;
	}
}

