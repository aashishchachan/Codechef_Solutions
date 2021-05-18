#include <bits/stdc++.h>
using namespace std;

#define loop(n) for(int i=0; i<n; i++)

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        cin>>arr[0];
        int max=arr[0], ans=1;
        for(int i=1; i<n; i++){
            cin>>arr[i];
            if(arr[i]<=max){
                ans++;
                max=arr[i];
            } 
        }

        cout<<ans<<endl;
        
        }
    return 0;
}