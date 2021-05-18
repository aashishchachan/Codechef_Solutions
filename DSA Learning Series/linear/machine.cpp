// this one is partially accepted because of maybe high time complexity.
// all STL functions are not O(1)

#include <bits/stdc++.h>
using namespace std;

#define loop(n) for(int i=0; i<n; i++)

int setn(vector <int> arr, int coins, int j){
    if(arr.size()==1){
        coins+=arr[0]-j;
        return coins;
    }
    else if(arr.size()==0){
        return coins;
    }
    vector <int> arr2;
    int min= *min_element(arr.begin(), arr.end());
    coins+= (min-j)*arr.size();
    j=min;
    auto it = find(arr.begin(), arr.end(), min);
    copy(arr.begin(), it, back_inserter(arr2));
    return setn(arr2, coins, j);
}

int main(){
    int test;
    cin>>test;
    while(test--){
        int n, coins=0, k;
        cin>>n;
        vector <int> arr;
        loop(n){
            cin>>k;
            arr.push_back(k);
        }
        int j=0;
        int m=setn(arr, coins, j);
        cout<<m<<endl;
    }
    return 0;
}