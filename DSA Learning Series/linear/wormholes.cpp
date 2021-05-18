#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
#define fr(i, k, n) for(ll i=k; i<n; i++)
#define bfr(i,k, n) for(ll i=n; i>k; i--)

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main(){

    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    ll n, x, y;
    cin>>n>>x>>y;
    pair <ll, ll> c_start[n], c_end[n]; // <time, contest no.>
    pair <ll, ll> enter[x], ext[y]; // <entry/ext time, 0>

    ll s, e;
    fr(i,0,n){
        cin>>s;
        cin>>e;
        c_start[i]=make_pair(s, i+1);
        c_end[i]=make_pair(e, i+1);
    } 
    fr(i,0,x){
        cin>>s;
        enter[i]= make_pair(s,0);
    }
    fr(i,0,y){
        cin>>e;
        ext[i]= make_pair(e,0);
    }
    sort(c_start, c_start+n);
    sort(c_end, c_end+n);
    sort(enter, enter+x);
    sort(ext, ext+y);

    ll j=0, temp=-1;
    fr(i,0, n){
        if(j==x){
            while(i<n){
                c_start[i].first=temp;
                i++;
            }
        }
        else if(enter[j].first>c_start[i].first) {c_start[i].first=temp;}
        else{
            temp=enter[j].first;
            j++;
            i--;
        }
    }

    j=y-1, temp=-1; 
    bfr(i,-1, n-1){
        if(j<0){
            while(i>-1){
                c_end[i].first=temp;
                i--;
            }
        }
        else if(ext[j].first<c_end[i].first) {c_end[i].first=temp;}
        else{
            temp=ext[j].first;
            j--;
            i++;
        }
    }

    sort(c_start, c_start+n, sortbysec);
    sort(c_end, c_end+n, sortbysec);
    ll min=INT_MAX;
    fr(i,0,n){
        if(c_end[i].first==-1 || c_start[i].first==-1) continue;
        temp=c_end[i].first - c_start[i].first +1;
        if(temp<0) continue;
        if(temp>0 && temp<=min) min=temp;
    }
    cout<<min<<endl;
    return 0;
}