#include <iostream>
using namespace std;
 
 int main(){
    int n;
    cout<<"enter number to check \n";
    cin>>n;
    if(n%3 == 0 && n%5 == 0){
        cout<<"BANG";
    }
    else if(n%3==0)cout<<"FIZZ";
    else if(n%5==0)cout<<"BUZZ";
    else{
        cout<<"SAD";
    }
 }