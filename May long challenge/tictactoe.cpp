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
    char grid[3][3], turn;
    ll x=0,o=0,_=0;
    forn(i,0,3){
        forn(j,0,3){
            cin>>grid[i][j];
            if(grid[i][j]=='X') x++;
            else if(grid[i][j]=='O') o++;
            else _++;
        }
    }
    if(_==9) {cout<<3<<endl; return;}
    if(x-o >1 || o>x) {cout<<3<<endl; return;} //not reachable
    if(x-o == 1) turn = 'O';
    else turn ='X';

    //diag1
    if((grid[0][0]!='_') && (grid[0][0]!=turn) && (grid[0][0] == grid[1][1]) && (grid[1][1]==grid[2][2])) {cout<<1<<endl; return;} //won,draw
    else if ((grid[0][0]!='_') && (grid[0][0]==turn) && (grid[0][0] == grid[1][1]) && (grid[1][1]==grid[2][2])) {cout<<3<<endl; return;}
    //diag2
    if((grid[2][0]!='_') && (grid[2][0]!=turn) && (grid[2][0] == grid[1][1]) && (grid[1][1]==grid[0][2])) {cout<<1<<endl; return;}  //won, draw
    else if((grid[2][0]!='_') && (grid[2][0]==turn) && (grid[2][0] == grid[1][1]) && (grid[1][1]==grid[0][2])) {cout<<3<<endl; return;}

    //verticals
    bool v=false;
    forn(i,0,3){
        if(grid[0][i]!='_' &&  (grid[0][i] == grid[1][i]) && (grid[1][i] == grid[2][i]) && v) {cout<<3<<endl; return;} //not reachable
        else if (grid[0][i]!='_' && (grid[0][i]!=turn) && (grid[0][i] == grid[1][i]) && (grid[1][i] == grid[2][i]) && !v) v=true;
        else if (grid[0][i]!='_' && (grid[0][i]==turn) && (grid[0][i] == grid[1][i]) && (grid[1][i] == grid[2][i]) && !v) {cout<<3<<endl; return;}
    }
    if(v) {cout<<1<<endl; return;} //won, draw

    //horizontals
    v=false;
    forn(i,0,3){
        if(grid[i][0]!='_' && (grid[i][0] == grid[i][1]) && (grid[i][1] == grid[i][2]) && v) {cout<<3<<endl; return;} //not reachable
        else if (grid[i][0]!='_' && (grid[i][0]!=turn) && (grid[i][0] == grid[i][1]) && (grid[i][1] == grid[i][2]) && !v) v=true;
        else if (grid[i][0]!='_' && (grid[i][0]==turn) && (grid[i][0] == grid[i][1]) && (grid[i][1] == grid[i][2]) && !v) {cout<<3<<endl; return;}
    }
    if(v) {cout<<1<<endl; return;} //won, draw

    if(_>0) {cout<<2<<endl; return;}
    else cout<<1<<endl; return;

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