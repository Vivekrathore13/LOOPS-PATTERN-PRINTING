#include<iostream>
using namespace std;
int main(){
    int n,j,k,i,q;
    cout<<"enter a row number "<<endl;
    cin>>n;

    for (i=1;i<=n;i++){
        //spaces
        for(k=1;k<=n-i;k++){
        cout<<" ";
        }
        //satrs
        for(j=1;j<=i;j++){
        cout<<j;
        }
        // for new condition adition
     for(q=i-1;q>=1;q--){
     cout<<q;
     }
        cout<<endl;
    }

}