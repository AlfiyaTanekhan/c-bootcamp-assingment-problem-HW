//binary expon...
#include <iostream>
using namespace std;
int main() {
  int a,n;
  cout << "Enter a number : ";
  cin>>a;
  cout<<"its power : ";
  cin>>n;
  int res = 1;
while(n){
if(n%2==0){
    a*=a;n/=2;
}
else {
    res*=a; n--;
}
}
cout<<"result : "<<res;
    return 0;
}