#include<iostream>
using namespace std;
int main(){
    int n,nst,nsp;
    cout<<"no of rows"<<endl;
    cin>>n;
    nst =1;
    nsp =n-1;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=nsp;j++){
        cout<<" ";
        }
       //stars
        nsp--;

       for(int k=1;k<=nst;k++){
        cout<<k;
       }
       nst+=2;
       cout<<endl;
    }
}