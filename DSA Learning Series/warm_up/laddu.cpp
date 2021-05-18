#include <bits/stdc++.h>
using namespace std;

#define loop(n) for(int i=0; i<n; i++)

int main(){
    int t;
    cin>>t;
    string str1="CONTEST_WON", str2="TOP_CONTRIBUTOR", str3="BUG_FOUND", str4="CONTEST_HOSTED", str5="INDIAN", str6="NON_INDIAN";    
    
    while(t--){

        /*string* arr[6] = {&str1, &str2, &str3, &str4, &str5, &str6};*/

        string origin, activity;
        int activities, rank, severity, laddus=0,months; 
        cin>>activities;
        cin>>origin;
        loop(activities){
            cin>>activity;

            if (activity==str1){
                cin>>rank;
                if (rank>20) laddus+=300;
                else laddus+=(320-rank);
            }
            else if (activity==str2){
                laddus+=300;
            }
            else if (activity==str3){
                cin>>severity;  
                laddus+=severity;
            }
            else if (activity==str4){
                laddus+=50;
            }
        }

        if (origin==str5){
            months=laddus/200;
        }
        else months=laddus/400;

        cout<<months<<endl;        

    }
    return 0;
}