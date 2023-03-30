#include <bits/stdc++.h>
using namespace std;

void increase(int n){
    // base case                                                // example n=5 then 1 2 3 4 5
    if(n==0)return ;
    // recursive call
    increase(n-1);             // head recursion
    //processing
    cout<<n<<" ";
}
void decrease(int n){
    // base case                                                              // example n=5 then 5 4 3 2 1
    if(n==0)return ;          // tail recursion
    // processing
     cout<<n<<" ";
     //recursive call
     decrease(n-1);
   
}
int main()
{
    int n;
    cout<<"Enter range : "<<'\n';
    cin>>n;
    cout<<"Increasing order -- "<<'\n';
    increase(n);
    cout<<"\n Decreasing order -- "<<'\n';
    decrease(n);
       return 0; 
}
