#include <bits/stdc++.h>
using namespace std;

#define loop(n) for(i=0; i<n; i++)

int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        char arr[2*n], endline;
        int aPresent=0, aPossible=n, bPresent=0, bPossible=n,i;
        loop(2*n){
            cin>>arr[i];
        }
        loop(2*n){
            if (i%2==0){
                if(arr[i]=='1') aPresent++; 
                else aPossible--; 
            }
            else {
                if (arr[i]=='1') bPresent++;
                else bPossible--;
            } 
            if (aPresent>bPossible){
                cout<<i+1<<endl;
                break;
            } 
            else if(bPresent>aPossible){
                cout<<i+1<<endl;
                break;
            }  
        }
        if(i==2*n) cout<<2*n<<endl;
    }
    return 0;
}