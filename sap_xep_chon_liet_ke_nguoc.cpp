#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int min;
    int dem=0;
    vector<int> b[100];
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]) min=j;
        }
        if(min!=i) swap(a[min],a[i]);
        dem++;
        for(int k=0;k<n;k++){
            b[dem].push_back(a[k]);
        }
        }
        for(int i=dem;i>=1;i--){
            cout<<"Buoc "<<i<<": ";
            for(int j=0;j<n;j++){
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
    }
