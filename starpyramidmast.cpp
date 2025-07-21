#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int nst=n;
    int snp=1;
    for(int i=1;i<=(2*n)+1;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        for(int k=1;k<=snp;k++){
            cout<<" ";
        }
         for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        nst--;
        snp+=2;
        cout<<endl;
    }
}