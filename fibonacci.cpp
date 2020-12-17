#include<iostream>
using namespace std;
int fib(int num){
    if(num<=1)
      return num;
    return fib(num-1)+fib(num-2);
}
int main(){
    int n;
    cout<<"Enter the number of series to be printed:";
    cin>>n;
    cout<<fib(n);
}