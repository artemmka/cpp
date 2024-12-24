#include <iostream>
using namespace std;

int main() {
	int a[5],min=10000,max=-10000;
	for(int i = 0;i<5;i++){
		cin>>a[i];
		if(a[i]<min) min=a[i];
		if(a[i]>max) max=a[i];
	}
	cout<<max<<endl<<min;
	return 0;
}