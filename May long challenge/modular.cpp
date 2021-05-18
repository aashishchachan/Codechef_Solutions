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

ll countDivisors(ll n, ll b, map llll bvec){
    ll cnt = 0;
    for(ll i=1 ; i<= sqrt(n); i++) {
        if(i>=b) break;

        if (n % i == 0) {
            if(i!=1) bvec.erase(i);
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;
 
            else // Otherwise count both
                cnt = cnt + 2;

            if(n/i >= b) cnt--;
            else bvec.erase(n/i);
        }
    }
    cnt = (cnt*(cnt-1)/2);
    return cnt;
}


void solve(){
    ll n,m;
    cin>>n>>m;
    ll sol=0;

    if(n>=m){
        //for b>m
        sol+= ((n*(n-1) - m*(m-1))/2);
        //for b<=m

        map llll bvec;
        forn(i,2,m+1){
            bvec[i]=i;
        }
        for(auto it= bvec.end(); it!=bvec.begin(); it--){
            ll lcm =(m/(*it).first)*(*it).first;
            ll as =countDivisors(lcm, (*it).first, bvec);
            //cout<<as<<" ";
            sol+=as;

            //make a set of divisors, set upper bound to n, check the number of elements before n, do n(n+1)/2
        }
    }
    else{
        map llll bvec;
        forn(i,2,n+1){
            bvec[i]=i;
        }
        // for n<m; b<m
        for(auto it= bvec.end(); it!=bvec.begin(); it--){
            ll lcm =(m/(*it).first)*(*it).first;
            ll as =countDivisors(lcm, n, bvec);
            sol+=as;
        }
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