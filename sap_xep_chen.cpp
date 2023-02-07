#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int pos, x;
    int dem=0;
    for(int i=1;i<n;i++){
        x=a[i];
        pos=i-1;
        cout<<"Buoc "<<dem<<": ";
        dem++;
        for(int j=0;j<i;j++) cout<<a[j]<<" ";
        while(pos>=0&&a[pos]>x){
            a[pos+1]=a[pos];
            pos--;
        }
        a[pos+1]=x;
        cout<<endl;
    }
    cout<<"Buoc "<<dem<<": ";
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}