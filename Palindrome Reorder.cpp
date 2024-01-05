#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;
    map<char,int>m;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }
    int isODD = 0;
    for(auto i:m){
        if(i.second%2!=0){
            isODD++;
        }
    }
    if(isODD>1){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        string ans = "";
    for(auto i:m){
        if(i.second%2!=0){
            continue;
        }
        else{
            for(int y=0;y<i.second/2;y++){
                ans += i.first;
            }
        }
    }
    for(auto i:m){
        if(i.second%2!=0){
            for(int y=0;y<i.second;y++){
                ans += i.first;
            }
        }
    }
    string ans2 ="";
    for(auto i:m){
        if(i.second%2!=0){
            continue;
        }
        else{
            for(int y=0;y<i.second/2;y++){
                ans2 += i.first;
            }
        }
    }
    reverse(ans2.begin(),ans2.end());
    ans = ans+ans2;
    cout<<ans<<endl;
    return 0;
    }
    
}