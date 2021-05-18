#include <bits/stdc++.h>
using namespace std;

#define loop(n) for(int i=0; i<n; i++)

int main() {
	int cases;
	cin>>cases;
	while(cases--){
	    vector <char> arr;
	    string k;
	    int count=0, length=0;
	    cin>>k;
		loop(k.length()){
			if(k[i]=='<') count++;
	        else count--;
	        if(count==0) length=i+1;
	        else if (count<0) break;
	    }
	    cout<<length<<endl;
	}
	return 0;
}
