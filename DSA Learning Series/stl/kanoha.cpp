#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void solve(){
}
int main()
{   
    //fast_cin();
    ll t;
    cin>>t;
    while(t--){
        ll n,z,k, sol=0;
        cin>>n>>z;
        multiset <int, greater<int>> vec;
        forn(i,n){
            cin>>k;
            vec.insert(k);
        }
        bool st=true;
        while(z>0){
            if(vec.empty()) {st= false; break;}
            k=*vec.begin();
            z-=k;
            k/=2;
            vec.erase(vec.begin());
            if(k!=0) vec.insert(k);
            sol++;
        }
        if(st) cout<<sol<<endl;
        else cout<<"Evacuate"<<endl;
        
    }
    return 0;
}
