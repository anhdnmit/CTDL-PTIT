#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int pos, x;
    int dem=0;
    vector<int> b[100];
    for(int i=1;i<n;i++){
        x=a[i];
        pos=i-1;
        dem++;
        for(int j=0;j<i;j++) b[dem].push_back(a[j]);
        while(pos>=0&&a[pos]>x){
            a[pos+1]=a[pos];
            pos--;
        }
        a[pos+1]=x;
        dem++;
        for(int k=0;k<n;k++){
            b[dem].push_back(a[k]);
        }
    }
    for(int i=dem;i>=0;i--){
        cout<<"Buoc "<<i<<": ";
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}