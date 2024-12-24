#include <iostream>
using namespace std;

void Swap(int & a , int & b){
	a = a + b;
    b = a - b;
    a = a - b;
}
int main() {
	int a,b;
	cin>>a>>b;
	Swap(a,a);
	cout<<a<<" "<<a;
	return 0;
}