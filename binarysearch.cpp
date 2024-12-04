#include <bits\stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int t; cin>>t; //target 
    int start = 0 , end = n-1;
    while(start<= end){
        int mid = start + ( end - start)/2;
        if (a[mid]==t){
            cout<<mid;
      return 0;
    } else if( a[mid]>t){
      end = mid -1;
    } else  {
        start = mid +1;
    }
    cout<<"No ";
}

        return 0;
}
