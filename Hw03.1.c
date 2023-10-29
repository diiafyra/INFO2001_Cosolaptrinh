#include <stdio.h>
#include <math.h>

int main(){
	printf("Nhap vao 1 so nguyen: ");
	long long n;
	scanf("%lld", &n);
	if(n % 2 == 0){
		printf("%lld LA SO CHAN", n);
	} else{
		printf("%lld LA SO LE", n);
	}
	return 0;
}
