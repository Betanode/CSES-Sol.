#include <iostream>
using namespace std;
 
#include <bits/stdc++.h>
 
 
 
int main() {
	// your code goes here
	string n;
	cin>>n;
	long long int k =0;
	long long int curr = 1;
	for(int i=0;i<n.size()-1;i++){
	    if(n[i] !=n[i+1]){
	        k = max(k,curr);
	        curr=0;
	    }
	    curr++;
	}
	k = max(k,curr);
	cout<<k<<" ";
	return 0;
}