#include <iostream>
#include <string>

using namespace std;
int main()
{
	double X,Y;
	char Operation;
	int con=1;
	
	while(con == 1)
	{
	cout<<"Welcome to the calculator app \n";
	
	cout<<"\nX: ";
	cin>>X;
	
	cout<<"\nY: ";
	cin>>Y;
	
	cout<<"\nOperation: (+,-,*,/): ";
	cin>>Operation;


	if (Operation == '+'){cout<<"\nX+Y:"<<X+Y;}
	
	else if (Operation == '-'){cout<<"\nX-Y:"<<X-Y;}
	
	else if (Operation == '*'){cout<<"\nX*Y:"<<X*Y;}
	
	
	else if (Operation == '/'){cout<<"\nX/Y:"<<X/Y;}
	
	else {cout<<"\nError!!";}
	
	cout<<"\nDo you want to continue? (1=Yes 0=No): ";
	cin>>con;
	
	}
	
	cout<<"Thanks for using the app";;
	
   return 0;
}



