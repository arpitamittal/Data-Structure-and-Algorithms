#include <iostream>
using namespace std;

int main() {


	cin.ignore();
	
	    string str;
	    getline(cin,str);
	    int i,count=0;
	    for(i=0;str[i];i++){
	        if(str[i]!=' ')
	         cout<<str[i];
	    }
	
	cout<<"\n";
	
	return 0;
}