#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

void prime_factors(int n){
	if(n<2){
		cout<<"no primefactors"<<endl;
		return;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			int count=0;
			while(n%i==0){
				n=n/i;
				count++;
			}
			printf("(%d,%d), ",i,count);
		}
	}
	if(n!=1) printf("(%d,%d)",n,1);
	cout<<endl;
	return;
}

int main(){
	int n=44;
	prime_factors(n);
	return 0;
}