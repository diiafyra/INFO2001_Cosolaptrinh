#include <stdio.h>
#include <math.h>

int main(){
	printf("Nhap vao so n: ");
	int n;
	scanf("%d", &n);
	int ketQua = 0;
	int i; //ver dev c++ không nhan khai bao ben trong ham 
	for ( i = 1; i<=n; i++) {
		ketQua = ketQua + pow(i, 2);
	}	
	printf("%d", ketQua);
	return 0;
}
