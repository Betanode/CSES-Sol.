#include <iostream>
using namespace std;
 
#include <bits/stdc++.h>
 
 
 
int main() {
	// your code goes here
	long long int n;
	cin>>n;
	vector<long long int>v;
	v.push_back(n);
	while(n!=1){
	    if(n==1){
	        break;
	    }
	    else{
	        if(n%2==0){
	            n = n/2;
	        }
	        else{
	            n = n*3 +1;
	        }
	    }
	    v.push_back(n);
	}
	
	for(auto i:v){
	    cout<<i<<" ";
	}
	return 0;
}
