//Count Set Bits in a Binary Number
#include <iostream>
using namespace std;
int main() {
   int n;cin>>n;
   int count=0;
   while(n>0){
       if(n%2==1){
             count++; 
       }
    n/=2;
   }
cout<<count;
return 0;
   
}