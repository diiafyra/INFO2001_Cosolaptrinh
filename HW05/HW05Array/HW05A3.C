#include <stdio.h>
#include <string.h>

int main(){
	int n, i;
	int flag=1;
	do{
		printf("Nhap vao so luong sinh vien: ");
		flag = 1;
		char f[30];
		fgets(f, 30, stdin);
		int check = sscanf(f, "%d", &n);
		if(check != 1){
			flag = 0;
		}
	} while(flag == 0);
	printf("%d", n);
	float arr[n];
	for(i=0; i < n; i++){
		do{
			printf("Nhap vao diem cua sv %d: ", i+1);
			flag = 1;
			char f[30];
			fgets(f, 30, stdin);
			int check = sscanf(f, "%f", &arr[i]);
			if(check != 1){
				flag = 0;
			}
		} while(flag == 0);
	}
	float totalM=0;
	for(i=0; i<n; i++){
		totalM = totalM + arr[i];
	}
	float averageM=totalM/n;
	printf("%.2f", averageM);
	
	return 0;
}
