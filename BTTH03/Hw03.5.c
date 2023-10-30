#include <stdio.h>
#include <math.h>

int main(){
	unsigned long long n, i;
	printf("Nhap vao 1 so nguyen duong: ");
	scanf("%llu", &n);
	char a = 0;
	if(n==1){
		printf("%llu khong phai so nguyen to", n);
		a=1;
	}
	for(i=2; i<n; i++){
		if(n % i ==0){
			printf("%llu khong phai so nguyen to", n);
			a = 1;
			break;
		}
	}
	if(a!=1){
		printf("%llu la so nguyen to", n);
	}
	return 0;
}
