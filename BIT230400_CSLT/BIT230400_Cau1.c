#include <stdio.h>

int main(){
	int n, f=0;
	printf("Nhap vao gia tri n: ");
	scanf("%d", &n);
	int arr[n];
	int i;
	for(i=0; i<n; i++){
		printf("Nhap vao phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("Danh sach so chan chia het cho 3: \n");
	for(i=0; i<n; i++){
		if(arr[i]!= 0 && arr[i] % 2 == 0 && arr[i] % 3 == 0){
			printf("%d\n", arr[i]);
			f=1;
		}
	}
	if(f==0){
		printf("Khong co phan tu nhu vay trong mang\n");
	}
	
	int max = arr[0];
	for(i=0; i<n; i++){
		if(arr[i] > max){
			max =  arr[i];
		}
	}
	printf("Phan tu lon nhat trong mang la: %d", max);
	return 0;
}
