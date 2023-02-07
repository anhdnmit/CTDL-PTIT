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
        int dem=0;
        int pos, x;
        for(int i=1;i<n;i++){
            x=a[i];
            pos=i-1;
            while(pos>=0&&a[pos]>x){
            a[pos+1]=a[pos];
            pos--;
            dem++;
        }
        a[pos+1]=x;
    }
    cout<<dem<<endl;
    }
}