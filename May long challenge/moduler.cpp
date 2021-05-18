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

map <ll, vector sll> factors;

ll countDivisors(ll num, ll bound, ll arr[]){
    ll cnt = 0;
    if(factors[num].size()==0){
        for(ll i=1 ; i<= sqrt(num); i++) {
            //if(i>bound) break;
            if (num % i == 0) {
                /*if(i<=bound))*/ {factors[num].pb(i); arr[i]=-1; }
                if(((num/i) !=i) /*&& (num/i <=bound)*/) {factors[num].pb(num/i); arr[num/i]=-1;}
            }
        }
    }
    if(bound>=(num/2)) cnt = factors[num].size();
    else{
        ll k=0;
        for(auto it=factors[num].end()-1; it!=factors[num].begin() ;it--){
            if(*it >bound) k++;
        }
        cnt=factors[num].size()-k;
    }
    //cout<<cnt<<" ";
    cnt = (cnt*(cnt-1)/2);
    return cnt;
}


void solve(){
    ll n,m;
    cin>>n>>m;
    ll sol=0;

    
    //for b>m
    if(n>m) sol+= ((n*(n-1) - m*(m-1))/2);
    
    //for b<=m
    ll t= m>n?n:m;
    ll barr[t+1]={0};
    for(ll b=t; b>m/2 ; b--) {
        if(barr[b]==-1) continue;

        ll lcm=((m/b)*b);
        ll as =countDivisors(lcm, n, barr);
        //cout<<as<<" ";
        sol+=as;
    }
    cout<<sol<<endl;
}

secsort()
int main(){
    fast_cin();
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}