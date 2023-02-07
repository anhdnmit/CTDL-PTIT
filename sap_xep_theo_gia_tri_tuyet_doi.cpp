#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int ,int> a, pair<int ,int> b){
    return a.first<b.first;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        pair<int,int> c[n];
        for(int i=0;i<n;i++){
            c[i].first=abs(x-a[i]);
            c[i].second=a[i];
        }
        stable_sort(c,c+n,comp);
        for(int i=0;i<n;i++){
            cout<<c[i].second<<" ";
        }
        cout<<endl;
    }
}