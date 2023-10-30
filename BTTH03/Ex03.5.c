#include <stdio.h>
#include <math.h>

int main(){
	printf("Nhap vao 1 so bat ki: ");
	int n;
	scanf("%d", &n);
	if(n<0 || n>pow(10,  18)){
		printf("INVALID");
	} else{
		int i = 1;
		int ansOdd = 0;
		int ansEven =0;
		while(n>0){
			if(n%10%2 == 0){
				ansEven = ansEven + n % 10;
			} else{
				ansOdd = ansOdd + n% 10;
			}
			n = n/10;
			i++;
		}
		printf("%d\n%d", ansEven, ansOdd);
	}
	return 0;
}
