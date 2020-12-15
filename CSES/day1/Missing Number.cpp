#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	unsigned long int n;
	cin >> n;
	unsigned long int keep,sum=0;
	for(unsigned long int i=0;i<n-1;i++){
		cin >> keep;
		sum+=keep;
	}
	cout << (n*(n+1)/2)-sum << endl;
}
