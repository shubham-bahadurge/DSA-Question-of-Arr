//insertion sorting
#include <iostream>
using namespace std;
void srt (int arr[],int n ){
    for (int i=1;i<n;i++){
        int currt = arr[i];
        int priv = i-1;
        while ( priv>=0&& arr[priv]>currt){
            swap(arr[priv],arr[priv+1]);
            priv--;
            cout<<priv<<endl;
        }arr[priv+1]=currt;
        
    }
for (int i=0;i<n;i++){
    cout<<arr[i];
}

}
int main (){
    int arr []={2,1,4,3,6,5};
int n = sizeof(arr)/sizeof(int);
srt(arr,n);
}
