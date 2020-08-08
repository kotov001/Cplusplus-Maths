
// reverse algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::reverse
#include <vector>       // std::vector
#include <iostream>
using namespace std;

int main(){
	string str = "123";
	std::vector<string>str;
	for(int i = 0 ; i <str.length() - 1;i++)
	std::reverse(str.begin(),str.end());
	
	cout << "My string contains: ";
	for(std::vector<string>::iterator it=str.begin();it!=str.end();++it)
          cout<< ' ' << *it;
          cout<<'\n';
	
    return 0;
	
}
