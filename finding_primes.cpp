#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> finding_primes(int n){
	
	//setting all numbers as prime
	vector<bool> isPrime(n+1,true);
	isPrime[0]=false;
	isPrime[1]=false;
	
	//Sieve oF Erastothenes
	for(int i=2;i<=sqrt(n);i++){
		if(isPrime[i]){
        	for(int j=2;i*j<=n;j++){
        		isPrime[i*j] = false;
        	}
        }	
	}
	
	//primes less than equal to n
	vector<int> primes;
	for(int i=1;i<=n;i++){
		if(isPrime[i]) primes.push_back(i);
	}
	return primes;
}

int main(){
	int n=15;
	vector<int> ans;
	ans=finding_primes(n);
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}