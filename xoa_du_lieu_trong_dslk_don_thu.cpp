#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[n];
    int k,h=0;
    cin>>k;
    for(int i=0;i<n;i++){
        if(a[i]!=k){
            b[h]=a[i];
            h++;
        }
    }
    for(int i=0;i<h;i++){
        cout<<b[i]<<" ";
    }
}
//AC