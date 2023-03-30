#include <bits/stdc++.h>
using namespace std;
bool linear_search(int *arr,int s,int ele){
    // base case when element not found
    if(s==0)return false;
    // base case when element found
    if(arr[0]==ele)return true;
    else{
        //recursive call
        linear_search(arr+1,s-1,ele);
    }
}
int main()
{
    int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to be found--"<<endl;
    cin>>key;
    if(linear_search(arr,n,key)){cout<<"Element is found.";}
    else{cout<<"Element not present.";}
       return 0; 
}
