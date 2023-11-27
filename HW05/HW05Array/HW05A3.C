#include <stdio.h>
#include <string.h>

int isInteger() {
	char check[50];
	//getchar();
	int a;//
    fgets(check, 50, stdin);
    int result = sscanf(check, "%d", &a);
    if (result == 1) {
        return a;
    } else {
        return -1;
    }
}
float isFloat() {
	char check[50];
	//getchar();
	float a;//
    fgets(check, 50, stdin);
    int result = sscanf(check, "%f", &a);
    if (result == 1) {
        return a;
    } else {
        return 1;
    }
}

int main(){
	int n, i;
	int flag=1;
	do{
		printf("Nhap vao so luong sinh vien: ");
		flag = 1;
		n = isInteger();
		if(n <0){
			printf("Nhap sai dinh dang: \n");
			flag = 0;
		}
	} while(flag == 0);
	float arr[n];
	for(i=0; i < n; i++){
		do{
			printf("Nhap vao diem cua sv %d tren thang 10: ", i+1);
			flag = 1;
			arr[i] = isFloat();
			if(arr[i] > 10 || arr[i]<0){
				printf("Hay nhap dung yeu cau \n");
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
