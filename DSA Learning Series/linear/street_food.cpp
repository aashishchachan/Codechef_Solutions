#include <bits/stdc++.h>
using namespace std;

#define loop(n) for(int i=0; i<n; i++)

int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr[n][3], profit[n], max=0;

        loop(n){
            cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
            profit[i]=arr[i][2]*(arr[i][1]/(arr[i][0]+1));
            if (profit[i]>max) max=profit[i];
        }
        cout<<max<<endl;
    }
    return 0;
}