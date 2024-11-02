#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=1 ; i<=n; i++){
      if(i%3==0 && i%5==0){
          cout<<"fizzBuzz"<<","<<" ";
      }
      else if(i%3==0){
          cout<<"Fizz"<<","<<" ";
      }else if(i%5==0){
          cout<<"Buzz"<<","<<" ";
      }else{
          cout<<i<<","<<" ";
          }
  }
  return 0;
cout<<a[n]<<" ";
    return 0;
}