#include <bits/stdc++.h>
using namespace std;

int z(int n){
    int k=0, m=1, i;
    while(1){
        i=n/pow(5,m);
        if (i==0) break;
        k+=i;
        m++;
    }
    return k;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<z(n)<<endl;
    }

    return 0;
}