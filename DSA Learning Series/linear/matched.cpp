#include <bits/stdc++.h>
using namespace std;

#define loop(n) for(int i=0; i<n; i++)

int main(){
    int n;
    cin>>n;
    int brr[n];
    int arr[2][3]={{0,0,0}, {0,0,0}};   // {{depth_counting, depth_max, index_maxdepth}, 
                                        // {brackets_counting, max_brackets, index_maxbracks}}
    // loop(2){
    //     for(int j=0; j<3; j++){
    //         cout<<arr[i][j]<<endl;
    //     }
    // }
    
    loop(n){
        cin>>brr[i];
        if (brr[i]==1){
            arr[0][0]++;
            arr[1][0]++;
            //cout<<arr[0][0]<<arr[0][1]<<endl;
            if(arr[0][0]>arr[0][1]){
                arr[0][1]==arr[0][0];
                arr[0][2]==i;
            }
        }
        else{
            arr[0][0]--;
            arr[1][0]++;
        }

        if(arr[0][0]==0){
            if(arr[1][0]>arr[1][1]){
                arr[1][1]==arr[1][0];
                arr[1][2]==i;
            }
            arr[1][0]==0;
        }
    }
    cout<<arr[0][1]<<arr[0][2]<<arr[1][1]<<arr[1][2]<<endl;

    return 0;
}