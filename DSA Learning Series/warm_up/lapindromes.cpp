#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;

        int alpha1[26], alpha2[26];
        for(int i=0; i<26; i++){
            alpha1[i]=0;
            alpha2[i]=0;
        }

        for (int i=0, j=(str.length()+1)/2; i<str.length()/2; i++, j++){
            alpha1[str[i] - 'a']++;
            alpha2[str[j] - 'a']++;
        }

        bool ans=true;

        for(int i=0; i<26; i++){
            if (alpha1[i]!=alpha2[i]) ans=false;
        }
        
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 
    }

}