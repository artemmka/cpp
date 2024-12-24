#include <iostream>
using namespace std;

int main() {
	const int pass = 12345;
	int cur = 0;
	cout<<"Enter password pozhaluista"<<endl;
	cin>>cur;
	while(cur!=pass){
		cout<<"Password is wrong!"<<endl;
		cin>>cur;
	}
	cout<<"The password is correct, you are logged in!";
	return 0;
}