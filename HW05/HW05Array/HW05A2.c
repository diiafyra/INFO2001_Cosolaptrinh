#include <stdio.h>
#include <string.h>
#include "hw05.h"

void linearSearch(int arr[], int n, int a){
	int f = 0;
	int i;
    for(i = 0; i < n; i++){
        if (arr[i] == a){
            printf("Vi tri cua %d trong mang la %d", a, i);
            f=1;
            break;
        }
    }
    if(f==0){
    	printf("khong co phan tu %d trong mang", a);
    }
}

void binarySearch(int arr[], int n, int a) {
    int i = 0;
    int f=0;
    while (i <= n-1) {
        int mid = i + (n - i)/2;
        if (arr[mid] == a){
        	printf("Vi tri cua %d trong mang la %d", a, mid);
        	f=1;
        	break;
		}
        else if (arr[mid] < a){
            i = mid+1;
        }
        else{
            n = mid-1;
        }
    }
    if(f==0){
    	printf("khong co phan tu %d trong mang", a);
	}
    
}   
int main(){
	int arr[] = {1, 3, 5, 6, 8, 9, 11, 40, 45, 67, 78};
	binarySearch(arr, 11, 45); //0.1087s
	printf("\n");
	linearSearch(arr, 11, 45); //0.1503s
	/*
	binary search yeu cau chuoi dau vao da duoc sap xep theo thu tu
	truong hop nhanh nhat 1 lan ss la khi phan tu can tim nam o giua
	truong hop xau nhat log_2n lan ss la khi phan tu can tim khong co trong mang
	
	linear search bat loi khi neu phan tu can tim nam o cuoi chuoi
	truong hop nhanh nhat 1 lan ss khi phan tu can tim o dau chuoi 
	truong hop xau nhat n lan ss khi phan tu can tim khong co trong mang
	*/

}
