//slation sort 
#include<iostream>
using namespace std ;
void srt (int *arr , int n ){
    
    for (int i =0 ; i<n; i++){
        int min = i;
        for (int j =i+1;j<n;j++){
        if(arr[j]<arr[min]){
        min = j;
    }
} 
swap(arr[i],arr[min]);
}
for (int i = 0; i<n;i++){
    cout<<arr[i];
}
}
int main ()
{
int arr[]={2,4,3,1,5,6};
int n =sizeof(arr)/sizeof(int);
srt(arr,n);
}
