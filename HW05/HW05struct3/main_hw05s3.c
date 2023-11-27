#include <stdio.h>
#include <string.h>
#include "hw05s3.h"


int main(){
	//printf("thu");
	struct Employee list[1000];
	int signal;
	int loop = 0;
	do{
		int req;
		printf("Nhap yeu cau theo so: \n");
		printf("1. Them nhan vien.\n");
		printf("2. Xoa nhan vien. \n");
		printf("3. Hien thi nhan vien \n");
		printf("4. Sap xep nhan vien. \n");
		printf("0. Ket thuc \n");
		char f[50];
		fgets(f, 50, stdin);
		int check = sscanf(f,"%d", &req);
		if(check != 1){
			printf("Nhap sai\n");
			continue;
		}
		
		if(req == 1){
			addP(list, 1000);
		}
		else if (req == 2){
			deleteP(list, 1000);
		} 
		else if (req ==3){
			findId(list, 1000);
		}
		else if (req == 0){
			signal = 1;
		} 
		else if (req == 4){
			sortNameAZ(list, 1000);
			int b;
			while(list[b].id != 0){
				displayData(list[b]);
				b++;
			}
		}
		else{
			printf("Nhap sai\n");
		}
		loop++;
	} while(signal == 0);
	return 0;
}
