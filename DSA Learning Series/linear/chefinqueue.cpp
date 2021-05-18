#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
#define fr(i, k, n) for(int i=k; i<n; i++)
#define bfr(i,k, n) for(int i=n; i>k; i--)

int main(){

    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    ll n, k, l, f=1;
    cin>>n>>l;
    stack < pair <ll,ll>> stk;
    fr(i,0,n){
        cin>>k;
        while(!stk.empty() && stk.top().first>k){
            f*=i-stk.top().second +1;
            f%=mod;
            stk.pop();
        }
        stk.push(make_pair(k, i));
    }
    cout<<f<<endl;

    return 0;
}