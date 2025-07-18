#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter no of rows: ";
    cin>>n;
    //cout<<"enter no of column: ";
    //cin>>m;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
}