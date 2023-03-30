#include <bits/stdc++.h>
using namespace std;
bool isSorted(int *v,int size){            // if you write bool isSorted(int &v,int size) the code will not run 
    if(size==0 || size==1)return true;
    if(v[0]<v[1] && isSorted(v+1,size - 1)){
        return true;
    } 
    else{
        return false;
    }
}

int main()
{
    int n,e;
    cin>>n;
    int a[n]; // array
    for(int i=0;i<n;i++){
        cin>>e;
      a[i]=e;
    }
    if(isSorted(a,n)){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Not sorted";
    }
       return 0; 
}
