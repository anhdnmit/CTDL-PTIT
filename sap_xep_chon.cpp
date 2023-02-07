#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n],min;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }

    int tmp;
    	if (min != i)
	    tmp = a[i];
		a[i] = a[min]; 
		a[min] = tmp;
        cout<<"Buoc "<<i+1<<": ";
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}