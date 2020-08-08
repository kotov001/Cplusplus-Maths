#include <iostream>
using namespace std;

void swapNumbers(int a, int b);
void swapNumbers(int a, int b){
	 b = a + b;
	 a = b - a;
	 b = b - a;
}
int main(){
int a = 20;
int b = 30;    
	 swapNumbers(a,b);
	 cout << " new a  = "<< a <<endl;
	 cout << " new b  = "<< b <<endl;
	 
	 return 0;
	 
	   
}
