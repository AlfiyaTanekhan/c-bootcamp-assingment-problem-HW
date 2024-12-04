#include<bits/stdc++.h>
using namespace std;
 
void seiveOferato(int n){
    bool prime[n+1];
    memset(prime ,true, sizeof(prime));
    for(int p=2; p*p<=n; p++){
        if(prime[p]==true){
            for(int q=p*p; q<=n; q+=p){
                prime[q] = false;
            }
        }
    }
    for(int p=2; p<=n; p++)
    if (prime[p])
    cout<<p<<" ";
}
int main(){
    int n;  cin>>n;
  
  seiveOferato(n);
    return 0;
}