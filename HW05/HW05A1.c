#include <stdio.h>
#include <string.h>
#include "hw05.h"

void bubbleSort(int arr[], int n){
	int i, j;
	for(i=0; i < n; i++){
		for(j=n-1; j > i; j--){
			if(arr[j]<arr[j-1]){
				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
	}
	for(i=0; i < n; i++){
		printf("%d ", arr[i]);
	}
}

void selectionSort(int arr[], int n){
	int i, j, idx;
	for(i = 0; i < n-1; i++){
		idx=i;
		for(j = i+1; j<n; j++){
			idx = j;
			int temp = arr[i];
			arr[i] = arr[idx];
			arr[i] = temp;			
		}
	}
	for(i=0; i < n; i++){
		printf("%d ", arr[i]);
	}
}
int main(){
	int arr[] = {7, 4, 99, -10, 34, 12, 98, 32, 5, 2, 87};
	bubbleSort(arr, 11); //0.03108s
	printf("\n");
	selectionSort(arr, 11); //0.03476s
	/*toc do cua bubble sort thay doi tuy vao vi tri ngau nhien. 
	truong hop nhanh nhat la khi mang da xep theo thu tu san
	truong hop lau nhat toi da la n*(n-1)/2 lan so sanh
	
	cua selection sort luon chay du n*(n-1)/2 lan so sanh */
}
