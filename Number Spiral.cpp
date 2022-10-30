#include <iostream>
using namespace std;
 
#include <bits/stdc++.h>
#define li long int
 
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	long int x, y;
	    //cout<<n<<endl;
	while (t--)
    {
        cin >> y >> x;
        long int n;
        if (y < x)
        {
            if (x % 2 == 1)
            {
                n = x * x;
                cout << n - y + 1 << endl;
            }
            else
            {
                n = (x - 1) * (x - 1) + 1;
                cout << n + y - 1 << endl;
            }
        }
        else
        {
            if (y % 2 == 0)
            {
                n = y * y;
                cout << n - x + 1 << endl;
            }
            else
            {
                n = (y - 1) * (y - 1) + 1;
                cout << n + x - 1 << endl;
            }
        }
    }
	return 0;
}