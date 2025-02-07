#include<bits/stdc++.h>
using namespace std;
void bubbleSort( int array[] , int n){
    for(int i = 0; i<n-1; i++){
        bool isSwap = false;
        for(int j = 0; j<n-1-i; j++){
            if(array[j]>array[j+1]){
                swap(array[j], array[j+1]);
                isSwap = true;
            }
        }
        if(isSwap){
            return;
        }
    }
}
void PrintArray(int array[], int n){
    for(int i = 0; i<n; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
void InputArray( int array[], int n){
    
    for(int i = 0; i<n; i++){
        cin>> array[i];
    }
}
 int main(){
    int n;
    cin>>n;
    int array[n];
    InputArray(array,  n);
    bubbleSort(array,  n);
     PrintArray(array,  n);
     return 0;
 }