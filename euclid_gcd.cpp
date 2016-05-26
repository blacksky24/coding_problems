#include <iostream>
using namespace std;

int euclid_gcd(int a,int b){
	int dividend,divisor;
	if(a>b) dividend=a, divisor=b;
	else dividend=b, divisor=a;
	while(divisor!=0){
		int remainder=dividend%divisor;
		dividend=divisor;
		divisor=remainder;
	}
	return dividend;
}

int main(){
	int ans;
	ans=euclid_gcd(105,450);
	cout<<ans<<endl;
	return 0;
}
