#include <iostream>
using namespace std;
 
#include <bits/stdc++.h>
 
 
 
int main() {
	// your code goes here
	long long int n;
	cin>>n;
	vector<long long int>v;
	for(int i=0;i<n-1;i++){
	    int x;
	    cin>>x;
	    v.push_back(x);
	}
	sort(v.begin() , v.end());
	int k=0;
	v.push_back(200001);
	vector<long long int>a;
	for(int i=0;i<n;i++){
	    a.push_back(i+1);
	}
	for(int i=0;i<n;i++){
	    if(v[i]!=a[i]){
	        k=a[i];
	        break;
	    }
	}
	cout<<k<<endl;
	return 0;
}