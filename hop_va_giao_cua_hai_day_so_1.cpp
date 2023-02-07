#include<bits/stdc++.h>
using namespace std;
void Xoa(int a[],int &n, int vitri) {
    for (int i = vitri + 1; i < n; i++) {
        a[i-1] = a[i];
    }
    n--;
}
int  main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        int dem;
        for(int i=0;i<m;i++){
            dem=0;
            for(int j=0;j<n;j++){
                if(b[i]==a[j]) break;
                else dem++;
            }
            if(dem==n){
                n++;
                int pos=n-2;
                while(pos>=0&&b[i]<a[pos]){
                    pos--;
                }
                pos++;
                for(int k=n-1;k>=pos-1;k--){
                    a[k+1]=a[k];
                }
                a[pos-1]=b[i];
            }
        }
        for(int i=0;i<m;i++){//b
            dem=0;
            for(int j=0;j<n;j++){//a
                if(b[i]==a[j]) break;
                else dem++;
            }
            if(dem==n){
                Xoa(b,m,i);
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<m;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}