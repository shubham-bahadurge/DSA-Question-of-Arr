#include <iostream>
using namespace std;
int main(){
    int n = 3;
    int m= 3;
    //array
int arr[4][4]={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}
};
//veriable
int str= 0;
int stc = 0;
int enr = n;
int endc = m;
while(str<=enr && stc<=endc){
//top
for(int i = stc;i<=endc;i++){
    cout<<arr[str][i]<<' ';
}
//right
for(int j = str+1;j<=enr;j++){
    cout<<arr[j][endc]<<' ';
}
//bottam
for(int i =endc-1;i>=stc;i--){
    if(str==enr){
        break;
    }
    cout<<arr[enr][i]<<' ';
}
//lift
for(int j = enr-1;j>=str+1;j--){ 
    if(stc==endc){
        break;
    }
    cout<<arr[j][stc]<<' ';
}  
str++;
stc++;
enr--;
endc--;
} 
    return 0;
}
