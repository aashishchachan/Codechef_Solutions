#include <bits/stdc++.h>
using namespace std;

#define int long long

//2486

int select(int i, int n){
    if (n==0) return 0;
    if (i==2){
        if (n==1) return 2;
        if (n==2) return 6;
        if (n==3) return 14;
    }
    if (i==4){
        if (n==1) return 4;
        if (n==2) return 12;
        if (n==3) return 18;
    }
    if (i==8){
        if (n==1) return 8;
        if (n==2) return 14;
        if (n==3) return 16;
    }
    if (i==6){
        if (n==1) return 6;
        if (n==2) return 8;
        if (n==3) return 12;
    }
    return 0;
}

signed main(){
    short t;
    cin>>t;
    while(t--){
        signed d0, d1;
        int k, sum;                
        cin>>k>>d0>>d1;
        signed d=d0+d1, mod=d%10;
        if (mod==5 || d==10 || k<=3){
            if(k==2){
                if(d%3==0) cout<<"YES"<<endl; 
                else cout<<"NO"<<endl;
                continue;
            }
            else{
                sum=d+mod;
                if(sum%3==0) cout<<"YES"<<endl; 
                else cout<<"NO"<<endl;
                continue;
            }
        }
        else{
            int cycles=(k-3)/4;
            int left=(k-3)%4;
            int r=(d+mod)%10;
            sum=d+(mod)+(20*cycles)+select(r,left);
            if (sum%3==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }     
        
    }
    return 0;
}