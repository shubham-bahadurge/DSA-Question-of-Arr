#include<iostream>
using namespace std;
void print (int *arr,int n){
    for (int i = 0; i<n; i++){
        cout<<arr[i];
    }
}
int main ()
{
    int arr [4]= {3,2,3,4};
    sort(arr,arr+4);
    print (arr,4);
    return 0;

} 