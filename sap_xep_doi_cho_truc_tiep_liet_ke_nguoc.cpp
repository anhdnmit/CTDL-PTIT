#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int dem=0;
        vector<int> b[100];
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]) swap(a[i],a[j]);
            }
        for(int k=0;k<n;k++){
            b[dem].push_back(a[k]);
        }
        dem++;
    }
    for(int i=dem;i>=1;i--){
        cout<<"Buoc "<<i<<": ";
        for(int j=0;j<n;j++){
            cout<<b[i-1][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    }
}