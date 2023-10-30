#include <stdio.h>
#include <math.h>

int main(){
	printf("Nhap vao 1 so bat ki: ");
	int n;
	scanf("%d", &n);
	int i =0;
	int numberOfEven =0;
	int numberOfOdd =0;
	while(n>0){
		if(n%10%2 ==0){
			numberOfEven = numberOfEven + 1;
		} else{
			numberOfOdd = numberOfOdd + 1;
		}
		n = n/10;
		i++;
	}
	if(numberOfOdd == numberOfEven){
		printf("YES");
	} else{
		printf("NO");
	}
	return 0;
}
