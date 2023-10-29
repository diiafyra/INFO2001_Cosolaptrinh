#include <stdio.h>

int main()
{
	printf("Nhap lan luot thang va nam: ");
	int t, n;
	scanf("%d %d", &t, &n);
	if(t<=0 || n<=0 || t>12){
		printf("INVALID");
	} else if(n % 4 ==0 && t ==2){
		printf("29");
	} else if (t==1 || t==3 || t==5 || t==7 || t==8 || t==10 || t==12){
		printf("31");
	} else if (t==2){
		printf("28");
	} else {
		printf("30");
	}
	return 0;
}
