#include <bits/stdc++.h>
using namespace std;

bool isSorted(const vector<int> &v,int size){
    if(size==0 || size==1)return true;
    if(v[0]<v[1] && isSorted(vector<int>(v.begin() + 1, v.end()), size - 1)){
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
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>e;
      //  arr.push_back(e); if we push element in this way then element size going to be 2*n
      arr[i]=e;
    }
    if(isSorted(arr,n)){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Not sorted";
    }
       return 0; 
}

/* 
  >>> If in function isSorted() we write: (v[0]<v[1] && isSorted(v+1, size - 1)) this doesn't work.
      The line if(v[0]<v[1] && isSorted(v+1,size-1)) assumes that the vector v is a continuous block of memory, 
      which is not true for std::vector. Instead, you should use std::vector::begin() and std::vector::end() to get iterators to the start and end of the vector.
      
   >>> Why function cannot be written like this bool isSorted(vector<int>& v, int size)???
       you are trying to pass a temporary object created by the expression vector<int>(v.begin() + 1, v.end()) as a non-const reference to the isSorted function, 
       which expects a reference to a modifiable vector<int> object.
       The problem is that the expression vector<int>(v.begin() + 1, v.end()) creates a new vector<int> object, 
       which is a temporary object that exists only for the duration of the expression. 
       Since temporary objects cannot be modified, they cannot be passed as non-const references.

       To fix the error, you can change the signature of the isSorted function to take a const reference to the vector, like this:
      
      bool isSorted(const vector<int>& v, int size){
       // ...
      }
      This tells the compiler that the v argument will not be modified by the function, and allows you to pass a temporary object as the argument.
      
      */
