#include<iostream>
using namespace std;
int main(){
    int i;
    int j;
    int k;
    int n;
    cout<<"Enter number:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
        
    }
}