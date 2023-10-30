#include <stdio.h>

int main()
{
	int n;
	printf("Nhap vao nam ban muon kiem tra:");
	scanf("%d", &n);	
	if(n<=0){
		printf("INVALID");
	} else if(n % 4 ==0){
		printf("YES");
	} else{
		printf("NO");
	}
	return 0;
}
