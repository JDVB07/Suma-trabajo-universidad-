#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float a,b,suma,resta,multi,divi;
	cout<<"1er #: ";cin>>a;
	cout<<"2do #: ";cin>>b;
	
	suma=a+b;
	resta=a-b;
	multi=a*b;
	divi=a/b;
	cout<<"la suma es: "<<a<<"+"<<b<<"="<<suma<<endl;
	cout<<"la resta es: "<<a<<"-"<<b<<"="<<resta<<endl;
	cout<<"la multi es: "<<a<<"x"<<b<<"="<<multi<<endl;
	cout<<"la division es: "<<a<<"/"<<b<<"="<<divi<<endl;
	return 0;
}