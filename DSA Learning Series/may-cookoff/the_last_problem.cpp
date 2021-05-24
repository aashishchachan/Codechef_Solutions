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

int solve(){
    int x1, x2, y1, y2;
    cin>>x1>>y1>>x2>>y2;

    int t=1;
    
    int i=2;
    for(i=2; i<=x1; i++){
        t=t+i;
    }
    i--;
    for(int j=2; j<=y1; j++){
        t=t+i;
        i++;
    }
    i++;
    int sum=t;
    for(int j=x1+1; j<=x2; j++){
        t=t+i;
        i++;
        sum+=t;
    }
    i--;
    for(int j=y1+1; j<=y2; j++){
        t=t+i;
        i++;
        sum+=t;
    }
    return sum;
}
secsort()
int main(){
    ll t;
    cin >> t;
    while(t--) {
        cout<<solve()<<endl;
    }
    return 0;
}