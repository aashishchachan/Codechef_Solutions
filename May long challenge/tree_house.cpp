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

class node{
    public:
        ll num; // node number
        ll val=0; // node value
        vector <ll> children; //vector with nodes of their children
};


void make_tree(ll parent, ll nd,  map <ll, vector sll>& adj, vector <node> &nodes){
    forn(i,0,adj[nd].size()){   // iterating over the elements of list
        if(adj[nd][i]!=parent) {    //all elements will be children accept the parent. As no. of edges in n-1, there will be no cycles.
            nodes[nd].children.pb(adj[nd][i]); 
            make_tree(nd, adj[nd][i], adj, nodes); //making tree for the children
        } 
    }
    return;
}


void taking_input(ll n, vector <node>& nodes){
    ll p,q;
    map <ll, vector sll> adj; //making an adjacency list
    forn(i,0, n-1){           
        cin>>p>>q;
        adj[p].pb(q);
        adj[q].pb(p);
    }

    make_tree(0, 1, adj, nodes); //structuring tree out of adjacency list
    return;
}


ll magnitude(ll nd, vector <node> &nodes){  //nd is the node for which we are calculating magnitude
    ll mag=1;
    ll n=nodes[nd].children.size();
    ll child_mag[n];    // to store the magnitude of all of its children (not in order)
    forn(i,0,n){ 
        ll temp=magnitude(nodes[nd].children[i], nodes);
        child_mag[i] = temp;
    }
    
    if(n>0) sort(child_mag, child_mag + n); //sorting the magnitude of children
 
    ll j=1; 
    bfor(i,n-1,-1){
        mag+=(child_mag[i]*j);  //calculating magnitude of nd node by distributing the multiples (k, 2k ,3k) to children in reverse order of their magnitude
        j++;
    }
    return mag;
}


void solve(){
    vector <node> nodes; //storing all the nodes by their number
    ll n,x, p,q;
    cin>>n>>x; 
    node empty;
    nodes.pb(empty); //node 0 will never be used
    forn(i,1,n+1){   //adrress nodes by the index of 'nodes' vector
        node temp;
        temp.num=i;
        nodes.pb(temp);
    }
    nodes[1].val=x;
    taking_input(n, nodes);
    ll sol=((x%mod)*(magnitude(1, nodes)%mod))%mod;
    cout<<sol<<endl;
    return;
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