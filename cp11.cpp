//Best Time to Buy and Sell Stock (Easy)
#include <iostream>
using namespace std;
int main() {
    int n;
   cin>>n;
  int price[n];
  for(int i=0; i<n; i++){
     cin>>price[i];
  } 
  int maxProfit = 0;
  for(int i=0; i<n-1; i++){
      for( int j=i+1; j<n; j++){
          int profit = price[j] - price[i];
          if( profit > maxProfit){
           maxProfit = profit;
          }  
      }
}
    cout<< maxProfit;
    
    return 0;
}