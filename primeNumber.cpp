// prime number
#include <iostream>
using namespace std;

int main() {
   int n;
   cout<<" Enter any number: ";
   cin>>n;
 
   for( int i=2; i<n; i++){
       if(n%i==0){
            cout<<" This is not prime number !";
          return 0;
       }
      
    }
    cout<< "This is prime number !";
   
    return 0;
}