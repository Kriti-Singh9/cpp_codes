// 0 1 1 2 3 5 8 13 21.......

#include <iostream>
using namespace std;

int fib(int n){
    //base case
    if(n==1)return 0;
    if(n==2)return 1;
    return fib(n-1) + fib(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<n<<"th term of fibonacci series is "<<fib(n);
       return 0; 
}
