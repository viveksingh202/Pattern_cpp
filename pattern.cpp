#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of the rows: ";
    cin>>n;
    //int mid=n/2+1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}