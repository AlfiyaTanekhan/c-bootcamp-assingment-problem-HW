//Two Sum 
#include <iostream>
using namespace std;
int main() {

   int n ;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
     cin>>arr[i];
  }
  int t;
    cin>>t;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==t)
            {
          cout<<i<<" "<<j<<endl;
          return 0;
            }
        }
    }
return {};
} 