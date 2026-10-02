#include<bits/stdc++.h>
using namespace std;

void print1(int n){
	for(int i=0; i<n; i++){
		for(int j=n; j>0; j--){
			cout << "*";
		}
		cout << endl;
	}
}
int main (){
   int n;
   cin >> n;
   print1(n);

	return 0;
}