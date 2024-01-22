#include <stdio.h>

int checkRemainder2_3(int n){
	if(n != 0 && n % 2 == 0 && n % 3 == 0){
		return 1;
	} else{
		return 0;
	}
}

int main(){
	int m, i, f=0;
	printf("Nhap vao gia tri m: ");
	scanf("%d", &m);
	printf("Danh sach so nguyen duong nho hon hoac bang m chia het cho ca 2 va 3: \n");
	for(i=1; i<=m; i++){
		if(checkRemainder2_3(i) == 1){
			printf("%d\n", i);
			f=1;
		}
	}
	if(f==0){
		printf("Khong co phan tu nho hon %d chia het cho ca 2 va 3\n", m);
	}
	
	return 0;
}
