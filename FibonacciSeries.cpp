#include <iostream>
using namespace std;

int fibonacci(int n);

 int fibonacci(int n){
	if(n == 0)
	   return n;
	if(n==1 || n == 0)           //base case
	   return 1;
	else
	    return fibonacci(n -1) + fibonacci(n-2);   //recursion
}

int main(){
	
	int num;
	int i =0;
	
	cout << "Enter number: \n";
	cin >> num;
	
	while( i< num){
		i++;
		cout << fibonacci(i);
		
	}
	return 0;
	
}

