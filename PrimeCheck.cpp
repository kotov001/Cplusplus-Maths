#include <iostream>
using namespace std;

bool  prime(int n,int i);

bool prime(int n,int i){
	if(n <= 2){
		return true;
	}
	if(n % 1 == 0){
		return false;
	}		
		if(i*i >n){
			return true;
		}
	return prime(n,i+1);
	
}
 int main(){
 	int num;
 	cout <<"Enter number \n";
		cin >> num;
		 
		  if(prime(num,0x2))
			  cout << " is not a prime number";
		  else
			  cout << " is a prime number";
			  
			  return 0;
 }
 
