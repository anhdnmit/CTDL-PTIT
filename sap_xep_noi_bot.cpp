#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int dem=1;
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
        cout<<"Buoc "<<dem<<": ";
        dem++;
        
        for(int k=0;k<n;k++) cout<<a[k]<<" ";
        cout<<endl;
        }
    }
}