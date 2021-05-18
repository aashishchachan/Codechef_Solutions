#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define mod 1000000007
#define forn(i, k, n) for(ll i=k; i<n; i++)
#define bfor(i,k, n) for(ll i=k; i>n; i--)
#define mp make_pair
#define pb push_back
#define des greater<int> 
#define sint <int>
#define sll <long long> 
#define llll <long long, long long>
#define stll <string, long long>
#define sstr <string>
#define intint <int,int>
#define stst <string, string>
#define stint <string, int>
#define debug cout<<"hello"<<endl;
#define secsort() bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

void solve(){
}
secsort()
int main(){
    fast_cin();
    ll n, m;
    cin>>n>>m;
    vector<pair llll> a, b;
    ll t;
    forn(i,0,n){
        cin>>t;
        a.pb(mp(t,i));
    }
    forn(i,0,m){
        cin>>t;
        b.pb(mp(t,i));
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    auto it = a.begin();
    for(auto it2 =b.begin(); it2!=b.end(); it2++){
        cout<<(*it).second<<" "<<(*it2).second<<endl;
    }
    it=b.end(); it--;
    auto it2= a.begin(); it2++;
    for(it2=it2; it2!=a.end(); it2++){
        cout<<(*it2).second<<" "<<(*it).second<<endl;
    }


    return 0;
}