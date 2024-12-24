#include <iostream>
using namespace std;
double sqr(double a){
	return a*a;
}
bool IsPointInCircle(double x,double y, double x0, double y0,double r){
	return (sqr(x-x0)+sqr(y-y0)<=r*r);
}

int main() {
	double x,y,x0,y0,r;
	cin>>x>>y>>x0>>y0>>r;
	cout<<(IsPointInCircle(x,y,x0,y0,r)?"YES":"NO");
	return 0;
}