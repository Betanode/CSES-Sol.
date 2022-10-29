#include <iostream>
using namespace std;
 
#include <bits/stdc++.h>
 
 
 
int main() {
	// your code goes here
	long long int n;
	vector<long long int>v;
	cin>>n;
	for(int i=0;i<n;i++){
	    int x;
	    cin>>x;
	    v.push_back(x);
	}
	long long int k = 0;
	for(int i=0;i<n-1;i++){
	    if(v[i]>v[i+1]){
	        k += v[i] - v[i+1];
	        v[i+1] = v[i];
	    }
	}
	cout<<k;
	return 0;
}