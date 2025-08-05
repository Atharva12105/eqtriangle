#include<iostream>
using namespace std;
int main(){
    int i;
    int j;
    int k;
    int m;
    cout<<"Enter number:"<<endl;
    cin>>m;
    for(i=1;i<=m;i++){
        for(j=1;j<=m-i;j++){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
        
    }
}