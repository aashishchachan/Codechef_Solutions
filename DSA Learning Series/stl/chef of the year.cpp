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
#define sll <long long> 
#define llll <long long, long long>
#define sint <int>
#define sstr <string>
#define intint <int,int>
#define stst <string, string>
#define stint <string, int>
#define stll <string, long long>
#define debug cout<<"hello"<<endl;
#define secsort() bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

void solve(){
}
secsort()
int main(){
    fast_cin();
    ll n,m;
    cin>>n>>m;
    map stst countries;
    map stll chef;
    map stll country; 

    string str1, str2;
    forn(i,0,n){
        cin>>str1>>str2;
        countries[str1]=str2;
    }
    forn(i,0,m){
        cin>>str1;
        chef[str1]++;
        country[countries[str1]]++;
    }
    ll i=0,k=0,max_chef=0,max_cont=0;
    string ch,co;
    auto it=chef.begin(), it2=country.begin();
    
    while(it!=chef.end()){
        if((*it).second>max_chef) {max_chef=(*it).second; ch=(*it).first;}
        it++;
    }
    while(it2!=country.end()){
        if((*it2).second>max_cont) {max_cont=(*it2).second; co=(*it2).first;}
        it2++;
    }
    
    cout<<co<<endl;
    cout<<ch<<endl;
    return 0;
}