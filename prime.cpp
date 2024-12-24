#include <iostream>
using namespace std;

int main() {
	int a;
	cout<<"Введите число:"<<endl;
	cin>>a;
	bool flag = false;
	for(int i = 2;i*i<a;i++){
		if(a%i==0) flag=true;
	}
	cout<<(!flag?"prime":"non-prime");
	return 0;
}