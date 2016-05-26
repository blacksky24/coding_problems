#include <iostream>

using namespace std;

int partition(int *a,int start,int end){
	int part_index=start;
	int pivot=a[end];
	for(int i=start;i<end;i++){
		if(a[i]<=pivot){
			swap(a[i],a[part_index]);
			part_index++;
		}
	}
	swap(a[end],a[part_index]);
	return part_index;
}

void quick_sort(int *a,int start,int end){
	if(start<end){
		int part_index=partition(a,start,end);
		quick_sort(a,start,part_index-1);
		quick_sort(a,part_index+1,end);
	}
}

int main(){
	int arr[]={6,4,2,5};
	int n=sizeof(arr)/sizeof(int);
	int start=0;
	int end=n-1;
	quick_sort(arr,start,end);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}