#include<iostream>
using namespace std;
int shubhii (int *sss,int n ,int key){
    int st =0,end =n-1;
    while (st<=end)
    {
        int mid = ((st+end)/2);
    if(sss[mid]==key) {
        return mid;
    }
    else if (sss[mid]<key){
        st = mid+1;
    }
    else{
        end = mid-1;
    }
    }return -1;
}
int main(){
int n =5;
int arr[n];
for (int i=0;i<n ; i++){
   cin>> arr[i];
 }
 for (int i=0;i<n ; i++){
   cout<< arr[i];

 }cout <<endl;
 
    

   cout<<shubhii(arr,n,6);
}
    
        
    
    
    

