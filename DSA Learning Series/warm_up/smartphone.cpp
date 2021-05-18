#include <bits/stdc++.h>
using namespace std;

#define loop(n) for(int i=0; i<n; i++)
#define int long long

signed main(){
    int n;
    cin>>n;
    int arr[n];

    loop(n){
        cin>>arr[i];
    }
    sort(arr, arr+n);

    int maxrev=0;
    loop(n){
        maxrev=max(maxrev, arr[i]*(n-i));
    }

    cout<<maxrev<<endl;
    
    return 0;
}