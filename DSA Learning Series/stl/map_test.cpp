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

secsort()
int main(){
    fast_cin();
    map <int, int> check;
    check[1] = 2;
    check[4] = 3;
    check[7] = 4;
    check[14] = 5;
    check[55] = 6;

    map <pair intint, bool> chh;
    chh[mp(1,0)]=true;
    chh[mp(3,9)]=true;
    chh[mp(2,2)]=false;
    chh[mp(5,7)]=true;
    chh[mp(6,3)]=true;

    vector sint chk;
    int* ptr;
    chk.push_back(1);
    chk.push_back(2);
    chk.push_back(2);
    chk.push_back(2);
    chk.push_back(2);
    chk.push_back(2);  

    // map <int,int>::iterator it3;
    // it3=check.begin();
    // it3++;
    // cout<<(*it3).second<<endl; 

    // for(vector <int>::iterator it=chk.begin(); it!=chk.end(); it++){
    //     cout<<(*it)<<endl;
    //     cout<<&((*it))<<endl;
    //     chk.push_back(5);
    // }

    // vector <int> ch;
    // vector<int>::iterator it2;
    // ch.push_back(3);
    // it2=ch.begin();
    // int t=5;
    // while(t--){
    //     cout<<*(it2)<<" "<<&(*(it2))<<endl;      //
    //     ch.push_back(4);
    //     it2++;
    // }
    // cout<<endl;
    // t=5;
    // it2=ch.begin();
    // while(t--){
    //     cout<<*(it2)<<endl;      //
    //     ch.push_back(4);
    //     it2++;
    // }

    if(!check.count(5)) debug;
    if(!check[5]) debug;
    if(!check.count(5)) debug;

    return 0;
}

