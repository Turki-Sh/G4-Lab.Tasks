#include <iostream>
using namespace std;
int main(){
 double baseSalary, totalSales, commission,commissionRate, pay;
 
cout<<"Base salary : ";
cin>> baseSalary;
cout<<"Total sales: ";
cin>> totalSales;
cout<<"Commission rate: ";
cin>> commission; 
commissionRate = commission/100;
pay = baseSalary + (totalSales*commissionRate) ;
cout<<"--------------------------------\n";
cout<<"Pay = "<< pay << "$" << "                    |"; 

return 0;
}
