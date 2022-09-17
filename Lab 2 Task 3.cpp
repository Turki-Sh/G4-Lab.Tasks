#include <iostream>
#include <string>
using namespace std;

int main(){
	int credit_hr;
	string coop;
	
	cout<<"Please enter your credit hour: ";
	cin>>credit_hr;
	
	cout<<"Please enter if you finished the coop training: ";
	cin>>coop;
	
	if(credit_hr>=150 && coop == "Yes" || coop == "yes"){cout<<"Congrats grad! ;)";}
	
	else if(credit_hr<=150 || coop == "No" || coop == "no" ){cout<<"you haven't completed graduation requirements ;(";}
	
	else{cout<<"Error!";}
	
	return 0;
}
