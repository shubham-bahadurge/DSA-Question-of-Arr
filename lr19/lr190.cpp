#include<iostream>
using namespace std;

int main (){
    int m =4;
    int n = 4;

    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    for (int i=0;i<n; i++){
        for (int j =i;j==i;){
            cout<<arr[i][j]<<' ';
        }
    }
}