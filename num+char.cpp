#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cout<<"enter a row number";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
        {
           if(i%2==0) cout<<(char)(j+64)<<" ";
           else cout<<j<<" ";
        }
        cout<<endl;
    }
}