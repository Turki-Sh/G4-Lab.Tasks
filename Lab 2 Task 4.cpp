#include <iostream>

using namespace std;
int main()
{
	char x;
	
	cout<<" -This program will calculate the ASCII value for the Character you enter- ";
	cout<<"\nEnter the Character: ";
	cin>>x;
	
	if(x>=65 && x<=98){cout<<"The Character is : Large Letter";}
	
	else if(x>=97 && x<=122){cout<<"The Character is : Small Letter";}
	
	else if(x>=48 && x<=57){cout<<"The Character is : Number";}

	else if(x>=0 && x<=47 ||x>=58 && x<=64||x>=91 && x<=96||x>=123 && x<=127){cout<<"The Character is : Specil Symbol";}

    else {cout<<"\nError!!";}
	
	cout<<"\n-Thanks for using ASCII calculator-";
	
	return 0;
}
