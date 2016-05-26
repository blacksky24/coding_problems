#include <iostream>

using namespace std;

void insertion_sort(int *a,int n){
	for(int i=1;i<n;i++){
		int hole = i;
		int value = a[i];
		while(hole>0 && value<a[hole-1]){
			a[hole] = a[hole-1];
			hole = hole-1;
		}
		a[hole] = value;
	}
}

int main(){
	int arr[]={6,4,2,5};
	int n=sizeof(arr)/sizeof(int);
	insertion_sort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}