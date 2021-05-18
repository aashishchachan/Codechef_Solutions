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

map <pair llll, bool> gcd_stat;
map <pair llll, ll> gcd;

ll gcd_fast(ll a, ll b){
  ll cur_gcd=1;
  if(a<b){
    ll t=a;
    a=b;
    b=t;
  }
  while(cur_gcd<=b){
    ll t=b;
    b=a%b;
    if(b==0) return t;
    a=t;
  }
  gcd[mp(a,b)]=cur_gcd;
  //gcd[mp(b,a)]=cur_gcd;
  gcd_stat[mp(a,b)]=true;
  //gcd_stat[mp(b,a)]=cur_gcd;
  return cur_gcd;
}


void solve(){
    ll k;
    cin>>k;
    ll sum=0;
    forn(i,1, (2*k)+1){
        ll a=k+((i+1)*(i+1));
        ll b=k+(i*i);
        if(gcd_stat[mp(a,b)]) sum+=gcd[mp(a,b)];
        //else if(gcd.count(mp(b,a))) sum+=gcd[mp(b,a)]; 
        else sum+=gcd_fast(k+((i+1)*(i+1)), k+(i*i));
    }
    cout<<sum<<endl;
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