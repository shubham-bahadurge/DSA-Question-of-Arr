#include<iostream>
using namespace std;
void str( int *arr , int n ){
    int llef[1000000];
    
     llef[0] =arr[0];
    for (int i =1; i<n ; i++){
        llef[i] = max(llef[i-1],arr[i-1]);
        cout<<llef[i];
    }cout<<endl;
    int lrig[1000000];
     lrig[n-1] =arr[n-1];
    for (int i= n-2 ;i>=0; i--){
    lrig[i] = max(lrig[i+1],arr[i+1]);
    cout<<lrig[i];
    }cout<<endl;
    int watr = 0;
    for (int i=1;i<n;i++){
        int m  = min(llef[i],lrig[i])-arr[i];     
       if(m>0){
        watr+=m;
       }
    }
   cout<<watr;
}
int main (){
    int arr []={ 4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
str(arr,n);
}