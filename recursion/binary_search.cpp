#include <bits/stdc++.h>
using namespace std;

bool binary_search(vector<int> &vec,int s,int e,int key){
    //base case when element not found
    if(s>e)return false;
    int mid= s+(e-s)/2;
    // base case when element found
    if(vec[mid]==key)return true;
    // recursive call
    else if(vec[mid]>key){
        binary_search(vec,s,mid-1,key);
    }
    else{
        binary_search(vec,mid+1,e,key);
    }
}


int main()
{
    int n,ele;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
       cin>>ele;
        v.push_back(ele);
    }
    int key;
    cout<<"Enter element to be searched --"<<endl;
    cin>>key;
    if(binary_search(v,0,n-1,key))cout<<"Element found";       // in binary search paas starting and ending position
    else {cout<<"not found";}
       return 0; 
}
