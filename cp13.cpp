//Product of Array Except Self 
#include <iostream>

using namespace std;
int main() {

   int n ;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
     cin>>arr[i];
  }
  for(int i=0; i<n;i++){
        int  product = 1;
      for(int j=0;j<n;j++){
          if (i!=j){
               product *= arr[j];
          }
      }
       cout<<product<<" ";
 }  
         
  return 0;
  
}