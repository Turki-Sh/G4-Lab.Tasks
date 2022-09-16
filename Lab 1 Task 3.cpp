#include <iostream>
using namespace std;
int main(){
	double Width,Length,Area;
	cout<<"Please enter Width: ";
	cin>>Width;
	cout<<"Please enter Length: ";
	cin>>Length;
	Area = Width*Length;
	cout<<"\nThe Area is: "<<Area<<" squarefeet\n";
	cout<<"Numbers of tiles needed: "<< Area/0.25;
	
	return 0;
}
