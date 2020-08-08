#include <iostream>
using namespace std;

int factorial(int n);
int factorial(int n){
    if(n== 0)
        return 1;
    return n * factorial(n-1);  // recursion
}
int main(){
    int num;
    cout<< "Enter num"<<endl;
    cin >> num;
    cout <<"Factorial of num "<<num << "is" <<factorial(num);

    return 0;

}
