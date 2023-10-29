#include <stdio.h>
#include <math.h>

int main(){
	printf("Nhap vao diem (0<= diem <= 10): ");
	float n;
	scanf("%f", &n);
	int i = 0;
	while(n<=0 || n>=10){
		float nNew;
		printf("Nhap dung yeu cau: ");
		scanf("%f", &nNew);
		n = nNew;
		i++;
	}
	if(n>=9){
		printf("Xuat sac");
	} else if (n>=8){
		printf("Gioi");
	} else if (n>=6.5){
		printf("Kha");
	} else if (n>=5){
		printf("Trung binh");
	} else{
		printf("Yeu");
	}
	return 0;
}
