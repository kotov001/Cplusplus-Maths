#include <iostream>
using namespace std;

int main(){
	int num;
	cout <<"Enter Num :";
	cin >> num ;
	
	if(num <=0)
	   cout <<"Enter number more than zero";
	else if(num %2==0)
	   cout<<"Even number";
	else
	     cout << "Odd number";
}
