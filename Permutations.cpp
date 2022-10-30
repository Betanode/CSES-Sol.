#include <iostream>
using namespace std;
 
#include <bits/stdc++.h>
 
 
 
int main() {
	// your code goes here
	long long int n;
	cin>>n;
	if(n==2 || n==3){
	    cout<<"NO SOLUTION"<<endl;
	    return 0;
	}
	if(n==1){
	    cout<<1<<endl;
	    return 0;
	}
	vector<long long int>v;
	int a = n-1;
	while(true){
	    v.push_back(a);
	    a = a-2;
	    if(a==0 && n%2!=0){
	        a = n;
	    }
	    else if(a==0 && n%2==0){
	        break;
	    }
	    else if(a==-1 && n%2!=0){
	        break;
	    }
	    else if(a==-1 && n%2==0){
	        a=n;
	    }
	}
	for(auto i:v){
	    cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}