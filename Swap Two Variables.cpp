#include<iostream>
using namespace std;

int main(){
	int a = 2, b = 3;
	a+=b;
	b = a - b;
	a-=b;
	cout<<"Value of  a : "<<a<<endl;
	cout<<"Value of b  : "<<b<<endl;
	return 0;
}


