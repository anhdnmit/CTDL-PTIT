#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int dem=0;
        for(int i=0;i<n;i++){
            if(a[i]==a[i+1]) dem++;
        }
        if(dem+1==n) cout<<"-1";
        else{
            cout<<a[0]<<" "<<a[1];
        }
        cout<<endl;
    }
}