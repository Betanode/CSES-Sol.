#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a , b;
        cin>>a>>b;
        long long sum = a+b;
        if(sum%3!=0){
            cout<<"NO"<<endl;
        }
        else if(min(a,b)*2 < max(a,b)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}