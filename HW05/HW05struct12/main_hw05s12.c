#include <stdio.h>
#include <string.h>
#include "hw05s12.h"

int main(){
	int f;
	int n;
	do{
		f=0;
		printf("Nhap vao so sv: ");
		n = isInteger(); //neu de isInteger vao if else thi se khien doc 2 lan ham isInteger
		if(n == 0){
			//printf("%d", isInteger(input));
			printf("HAY NHAP VAO 1 SO. \n");
			f=1;
			continue;			
			//scanf("%d", &n);
		} 
		//printf("%d", n);
	} while(f==1);

	struct Student list[n];
	int i;
	printf("\n");

    for(i=0; i<n; i++){
    	do {
    		f=0;
    		int a, b;
    		printf("Nhap vao id sv %d: ", i+1);
        	//scanf("%d", &list[i].id);
        	//KHI INPUT khac so scanf tra ve gia tri khong xac dinh, sscanf tra ve 0
        	list[i].id = isInteger();
        	if (list[i].id == 0){
        		printf("HAY NHAP VAO 1 SO. \n");
        		f=1;
			}
        	for(b=0; b<i; b++){
        		if(list[i].id == list[b].id){ //doi tu a thanh b
        			printf("ID BI LAP\n");
        			f=1;
				}
			}
			a++;
		} while(f==1);

		char demo[50];
		do{
	        printf("Nhap vao ten sv %d: ", i+1);
	        //getchar();
	        fgets(demo, 50, stdin);
	        int demo1;
	        int check = sscanf(demo, "%d", &demo1);
	        //printf("%d", check);
	        if(check != 0){
	        	printf("HAY NHAP VAO CHUOI KI TU. \n");
	        	f=1;
			} else{
				f=0;
			}
		} while(f == 1);


        char temp[50];
	    int tempIndex = 0;
	    //char chuoi[30] = "Nguyen Trang";
	    list[i].nameWords = countSpaces(demo, 50);
	    int x = countSpaces(demo, 50);
	    //printf("%d", x);
	    //printf("Nhap ten day du: ");
	    int a;
	    for (a = 0; a <= strlen(demo); a++) {
	        if (demo[a] != ' ' && demo[a] != '\0') {
	            temp[tempIndex++] = demo[a];
	        } else {
	            temp[tempIndex] = '\0'; // K?t thúc chu?i t?m
	            if (tempIndex > 0) {
	                strcpy(list[i].name[x], temp);
	                x--;
	                tempIndex = 0;
	            }
	        }
	    }

        do{
        	f=0;
	        printf("Nhap vao tuoi sv %d: ", i+1);
	        list[i].age = isInteger();
	        if (list[i].age == 0){
	    		printf("HAY NHAP VAO 1 SO. \n");
	    		f=1;
			}
	    }while(f==1);

	    do{
        	f=0;
	        printf("Nhap vao lop sv %d: ", i+1);
	        list[i].grade = isInteger();
	        if (list[i].grade == 0){
	    		printf("HAY NHAP VAO 1 SO. \n");
	    		f=1;
			}
	    }while(f==1);

	    do{
        	f=0;
	        printf("Nhap diem cua sv %d: ", i+1);
	        list[i].mark = isFloat();
	        if (list[i].mark == 0){
	    		printf("HAY NHAP VAO 1 SO. \n");
	    		f=1;
			}
	    }while(f==1);

		printf("%s", "\n");
    }

	int signal = 0;
	int loop =0;
	do{
		int req;
		printf("Nhap so: \n");
		printf("1. Cap nhat thong tin \n2. Sap xep sinh vien theo ten \n3. Sap xep sinh vien theo id \n4. Tim kiem sinh vien theo ten \n5. Tim kiem sinh vien theo id \n0. Ket thuc");
		printf("\n");
		scanf("%d", &req);

		if(req == 1){
			updateData(list, n);
		}
		else if(req == 2){
			int loop2 = 0;
			int signal2;
			do{
				signal2=1;
				int req2;
				printf("\n1. Tu A-Z \n2. Tu Z-A \n0. quay lai\n");
				printf("Nhap so: ");
				scanf("%d", &req2);
				if(req2 == 1){
					sortNameAZ(list, n);
					int b;
					for(b=0; b < n; b++){
						displayData(list[b]);
					}
				} else if(req2 == 2){
					sortNameZA(list, n);
					int b;
					for(b=0; b < n; b++){
						displayData(list[b]);
					}
				}else if(req2 == 0){

				} else{
					printf("Nhap sai\n");
					signal2 = 0;
				}
			} while(signal2 == 0);
		}
		else if(req == 3){
			int loop3 = 0;
			int signal3;
			do{
				signal3=1;
				int req3;
				printf("\n1. Tu cao den thap \n2. Tu thap den cao \n0. quay lai\n");
				printf("Nhap so: ");
				scanf("%d", &req3);
				if(req3 == 1){
					sortMarkDown(list, n);
					int b;
					for(b=0; b < n; b++){
						displayData(list[b]);
					}
				} else if(req3 == 2){
					sortMarkDown(list, n);
					int b;
					for(b=0; b < n; b++){
						displayData(list[b]);
					}
				}else if(req3 == 0){

				} else{
					printf("Nhap sai\n");
					signal3 = 0;
				}
			} while(signal3 == 0);
		}
		else if (req == 4){
			findStdName(list, n);
		}
		else if(req == 5){
			findStdId(list, n);
		}
		else if(req == 0){
			signal = 1;
		}
		else{
			printf("Nhap sai\n");
		}
		loop++;
	} while(signal == 0);

	/*sortNameZA(list, n);
	int b;
	for(b=0; b < n; b++){
		displayData(list[b]);
	}
    //updateData(list, n);
	//sortNameAZ(list, n);
	//printf("%s", list[0].name[1]);
	//printf("%d", list[0].nameWords);
	//displayData(list[0]);*/
}
