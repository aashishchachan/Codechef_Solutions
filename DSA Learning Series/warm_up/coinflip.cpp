//if number of coins=odd, odd positions will change.
//if even; even will change.

#include <bits/stdc++.h>
using namespace std;

#define loop(n) for(int j=0; j<n; j++)

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int g;
        cin>>g;
        while(g--){
            int i,n,q;
            cin>>i>>n>>q;

            //a trick to change 2 to 1: ~1
            // to change 1 to 2: 2<<1
            int alt, same;
            if (n%2!=0){
                alt=(n+1)/2;
                same=n-alt;
            }
            else{
                alt=n/2;
                same=alt;
            }

            if(q==i) cout<<same<<endl;
            else cout<<alt<<endl;

        }      
    }
    return 0;
}