#include <iostream>
using namespace std;

int main (){
    int n= 4;
    
    int key = 37;
    int arr[4][4]={
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };
    int r =0;
    int c=3;
    while(r<n && c>=0){
        if (arr[r][c]== key){
            cout<<arr[r][c];
        }else if(arr[c][r]<key){
            c--;
        }else{
            r++;
        }
    }
    return 0;
    cout<<"i am noob";
}