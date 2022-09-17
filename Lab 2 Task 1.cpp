#include <iostream>
using namespace std;
int main()
{
	double X=0,Y=0,Z=0;
	
	cout<<"\nPlease enter X: ";
	cin>>X;
	
	cout<<"\nPlease enter Y: ";
	cin>>Y;
	
	cout<<"\nPlease enter Z: ";
	cin>>Z;
	
	if(X>Y && X>Z){cout<<"\nX is the largest";}
	
	else if(Y>X && Y>Z){cout<<"\nY is the largest";}
	
	else if(Z>X && Z>Y){cout<<"\nZ is the largest";}
	
	else {cout<<"\nError!!";}
	
   return 0;
}
