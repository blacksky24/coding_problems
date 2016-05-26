#include <iostream>

using namespace std;

void merge(int *l,int *r,int *a,int l_n,int r_n){
	int i=0,j=0,k=0;
	while(i<l_n && j<r_n){
		if(l[i]<r[j]){
			a[k]=l[i];
			i++;
		}
		else{
			a[k]=r[j];
			j++;
		}
		k++;
	}
	while(i<l_n){
		a[k]=l[i];
		i++;
		k++;
	}
	while(j<r_n){
		a[k]=r[j];
		j++;
		k++;
	}
}

void merge_sort(int *a,int n){
	if(n<2) return;
	int mid=n/2;
	int left[mid],right[n-mid];
	for(int i=0;i<mid;i++){
		left[i]=a[i];
	}
	for(int i=mid;i<n;i++){
		right[i-mid]=a[i];
	}
	merge_sort(left,sizeof(left)/sizeof(int));
	merge_sort(right,sizeof(right)/sizeof(int));
	merge(left,right,a,sizeof(left)/sizeof(int),sizeof(right)/sizeof(int));
}

int main(){
	int arr[]={6,4,2,5};
	int n=sizeof(arr)/sizeof(int);
	merge_sort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}