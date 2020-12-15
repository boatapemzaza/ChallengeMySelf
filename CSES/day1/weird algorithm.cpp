#include <iostream>
using namespace std;
void weid(unsigned long int n){
	cout << n << " ";
	if(n>1){
		n=(n%2)?n*3+1:n/2;
		weid(n);
	}
	else
		return;
}

int main(){
	unsigned long int n;
	cin >> n;
	weid(n);
}

