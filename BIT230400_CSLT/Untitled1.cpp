#include <stdio.h>

int check(int n){
	if(n != 0 && n % 2 == 0 && n % 3 == 0){
		return 1;
	} else{
		return 0;
	}
}

int main(){
	int m, i;
	printf("Nhap vao gia tri m: ");
	scanf("%d", &m);
	for(i=1; i<=m; i++){
		if(check(i) == 1){
			printf("%d\n", i);
		}
	}
	return 0;
}
