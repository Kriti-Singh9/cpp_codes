// Print largest subarray sum
//method 1 (Brute force)
#include <iostream>
using namespace std;
int largestSubarraySum1(int arr[],int n){
    int m=0;
    for(int i=0;i<n;i++){
        
        for(int j=i;j<n;j++){
            int s=0;
            for(int k=i;k<=j;k++){
                s+=arr[k];
            }
            m=max(m,s);
        }
    }
    return m;
}

// method -2 (Prefix Sum)                              arr= [1,2,3,-2,1]
int largestSubarraySum2(int arr[],int n){      //      pre= [1,3,6,4,5]
    int m=0,pre[n];
    pre[0]=arr[0];
    for(int i=1;i<n;i++){
        pre[i] = pre[i-1] + arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int s=0;
            s = i>0 ? pre[j] -pre[i-1] : pre[j];
            m=max(m,s);
        }
    }
    return m;
}

// method -3 (Kadane's Algorithm)                   arr= [-2,3,4,-1,5,-12,6,1,3]
           //  if(sumis negative write it 0)        cs =  0,3,7,6,11,(-1)0,6,7,10
int largestSubarraySum3(int arr[],int n){    //     ms =  0,3,7,7,11,11,11,11,11
    int ms=0,cs=0;
    
    for(int i=0;i<n;i++){
       cs+=arr[i];
       cs=cs>0 ? cs : 0;
       ms=max(cs,ms);
    }
    return ms;
}


int main()
{
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Largest subarray sum is : "<< largestSubarraySum1(arr,n)<<"\n";
    cout<<"Largest subarray sum is : "<< largestSubarraySum2(arr,n)<<"\n";
    cout<<"Largest subarray sum is : "<< largestSubarraySum3(arr,n);

       return 0; 
}