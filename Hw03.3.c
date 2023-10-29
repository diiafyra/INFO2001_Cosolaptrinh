#include <stdio.h>
#include <math.h>

int main(){
	int a;
	for(a=1; a<=10; a++){
		int b;
		for(b=2; b<=9; b++){
			printf("%d x %d = %d\t", b, a, a*b);
		}
		printf("\n");
	}
	return 0;
}
