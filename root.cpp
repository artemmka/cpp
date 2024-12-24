#include <iostream>
#include <cmath>
using namespace std;

double D(double a,double b, double c){
	return b*b-4*a*c;
}

double root(double Di,double a,double b){
	return (-b+Di)/2*a;
}

int main() {
	double a,b,c,x1,x2;
	cin>>a>>b>>c;
	if(D(a,b,c)>=0){
		if(D(a,b,c)>0){
			x1=root(D(a,b,c),a,b);
			x2=root(-D(a,b,c),a,b);
			cout<<x1<<" "<<x2;
		}
		if(D(a,b,c)==0){
			x1=root(D(a,b,c),a,b);
			cout<<x1;
		}
	}
	if(D(a,b,c)<0){
		cout<<"D < 0";
	}
	return 0;
}