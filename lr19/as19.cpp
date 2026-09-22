#include<iostream>
using namespace std;
int main (){
//qus 1
    int n =2;
    int m =3;
    int key = 7;
    int sum =0;
int arr[ 2][3 ] = { {4,7,8}, {8,8,7} }; 
for (int i =0;i<n;i++){
    for (int j =0;j<m;j++){
        if (arr[i][j]==key){
            sum++;
        }
    }
} cout << sum<<endl;
// qus 2
int sum2 =0;
int nums[ 3][ 3] = { {1,4,9}, {11,4,3}, {2,2,3} };
for (int i =1;i==1; i++){
    for (int j = 0;j<m;j++){
        sum2 += nums[i][j];
    }
} cout<<sum2<<endl;
//qus 3

;
int csrt[3][2];
int srt [2][3] = {
    {1,2,3},
    {4,5,6}
};
for (int i =0;i<n;i++){
            for (int j =0;j<m;j++){
           csrt [j][i] = srt [i][j];
            }
        }
        cout <<endl;
        for (int i =0;i<m;i++){
    for (int j =0;j<n;j++){
        cout<<csrt[i][j]<<" ";
    }
    }cout<<endl;
//qus 5
    int k =4;
    int s = 4;
    int crt [4][4];
    int rt [4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
        
    };
    for (int i =0; i<k;i++){
        for (int j =0; j<s;j++){  
        for (int c =k-i-1;c==k-i-1;c++){
       crt [j][c]=rt[i][j];
        }
        }
    }
for (int i =0;i<s;i++){
    for (int j =0;j<k;j++){
        cout<<crt[i][j]<<" ";
}
}
return 0;
}