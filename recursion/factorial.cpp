// Recursive program to get factorial of a number (n!)

#include <iostream>
using namespace std;
long long fact(int num){
    // base case
    if(num==1)return 1;
    // recurrence relation
    return num*fact(num-1);
}
int main()
{
     int n;
     cin>>n;
     cout<<"Factorial of "<<n<<" is "<<fact(n);
       return 0; 
}
