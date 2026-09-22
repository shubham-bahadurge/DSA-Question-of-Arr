#include<iostream>
using namespace std;
void srt(int *arr , int n ){
    for ( int i = 0 ; i<n-1; i++){
        for (int j = 0 ; j<n-1; j++){
        if ( arr[j] >  arr[j+1]){
           swap(arr[j],arr[j+1]);
        }
} 
    }
    for (int i =0;i<n;i++){
        cout<<arr[i];
    }
        
}
int main (){
int arr [] = {5,4,1,2,3};
int n = sizeof(arr)/sizeof (int);
srt(arr,n);

}