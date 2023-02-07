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
        int check=0;
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]) {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                check++;
            }
        }
        if(check!=0){
            dem++;
        for(int k=0;k<n;k++){
            b[dem].push_back(a[k]);
        }
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
}