#include<iostream>
using namespace std;
void stt (int *stok , int n){
    int best [1000000];
    best[0] = INT_MAX;
    for (int i =1;i<n ;i++){
         best [i]= min(best[i-1],stok[i-1]);
         cout <<best[i];
    }
    cout<<endl;
    int profit = 0;
    for (int i =1 ; i<n ;i++){
    int cpro = stok[i]- best[i];
    profit= max(cpro,profit);
    }

cout<<profit;
}
int main (){
    int stock [] = { 4,1,5,8,9};
    int n = sizeof(stock)/sizeof(int);
    stt(stock,n);

}
 