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

//secsort()

// void check(pair llll plant, map <pair llll, bool> plants, ll &c){
//     ll i=plant.first, j=plant.second;

//     if(!plants[mp(i, j-1)]) c++;
//     if(!plants[mp(i, j+1)]) c++;
//     if(!plants[mp(i-1, j)]) c++;
//     if(!plants[mp(i+1, j)]) c++;
// }

void solve(){
    ll n, m, k, t1, t2;
    cin>>n>>m>>k;
    map <pair llll, bool> plants;
    forn(i,0,k){
        cin>>t1>>t2;
        plants[mp(t1,t2)]=true;
    }

    ll count =0,c=0;
    for(auto it= plants.begin(); it!=plants.end(); it++ ){
        
        ll i=(*it).first.first, j=(*it).first.second;
        
        if(!plants.count(mp(i, j-1))) c++;
        if(!plants.count(mp(i, j+1))) c++;
        if(!plants.count(mp(i-1, j))) c++;
        if(!plants.count(mp(i+1, j))) c++;
        
        //check((*it).first, plants, count);
    }
    cout<<c<<endl;
    return;
}


int main(){
    fast_cin();
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}