#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    int sum = a+b;
    int difference = a-b;
    int product = a*b;
    cout<<sum<<endl<<difference<<endl<<product<<endl;
   if(b!=0){
       float quotient = float(a)/b;
       int remainder = a%b;
       cout<<quotient<<endl<<remainder;
   }else{
       cout<<"infinity";
   }
   return 0;
}