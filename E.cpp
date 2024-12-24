#include <iostream>
#include <string>
using namespace std;

string area(int x, int y){
	return ((y-x)<1&&(x+y)<1&&(x+y)>-1&&(y-x)>-1)?"YES":"NO";
}

int main() {
	int a,b;
	cin>>a>>b;
	cout<<area(a,b);
	return 0;
}