#include <iostream>
using namespace std;

float power(double a, int n){
	int ass = a;
	if(n==0) return 1;
	switch(n>0){
		case true:
			for(int i = 0;i<n-1;i++){
				a=a*ass;
			}
			break;
		case false:
			a=1/a;
			ass=1/ass;
			for(int i = 0;i<n-1;i++){
				a=a*ass;
			}
			break;
	}
	return a;
}
int main() {
	double a;
	int n;
	cin>>a>>n;
	float c = power(a,n);
	cout<<c;
	return 0;
}