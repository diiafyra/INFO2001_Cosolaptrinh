#include <stdio.h>
#include <math.h>

int main(){
	long long n;
	printf("Nhap vao 1 so bat ki: ");
	scanf("%lld", &n);
	int i;
	int ans = 0;
	for(i=1; i<=n; i++){
		if(i % 2 ==1){
			ans = ans + i;
		}
	}
	printf("%lld", ans);
	return 0;
}
