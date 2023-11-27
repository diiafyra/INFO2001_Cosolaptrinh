#include <stdio.h>
#include <string.h>
#include "hw05s3.h"

int countSpaces(char arr[], int n) {
    int count = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == ' ') {
            count++;
        }
    }
    return count;
}

void swapStruct(struct Employee list[], int n, int m){
	int temp1 = list[n].id;
	list[n].id = list[m].id;
	list[m].id = temp1;

	int temp3 = list[n].nameWords;
	list[n].nameWords = list[m].nameWords;
	list[m].nameWords = temp3;


	int temp5 = list[n].salary;
	list[n].salary = list[m].salary;
	list[m].salary = temp5;
	
	char temp4[30];
	strcpy(temp4, list[n].role);
	strcpy(list[n].role, list[m].role);
	strcpy(list[m].role, temp4);


	char temp2[20][20];
    int a;
    for (a = 0; a < 20; a++) {
        strcpy(temp2[a], list[n].name[a]);
        strcpy(list[n].name[a], list[m].name[a]);
        strcpy(list[m].name[a], temp2[a]);
    }

}
void deleteStruct(struct Employee list[], int n){
	list[n].id = list[n+1].id;

	list[n].nameWords = list[n+1].nameWords;

	list[n].salary = list[n+1].salary;
	
	strcpy(list[n].role, list[n+1].role);

    int a;
    for (a = 0; a < 20; a++) {
        strcpy(list[n].name[a], list[n+1].name[a]);
    }
}

void displayData(struct Employee list){
	int i;
    printf("Ma nhan vien: %d\n", list.id);

    int a;
    for(a=list.nameWords; a>=0; a--){
    	printf(" %s", list.name[a]);
	}
    printf("Chuc vu: %s", list.role);
    printf("Luong: %d\n", list.salary);
    printf("\n");
	//}
}

 int findId(struct Employee list[], int n){
	printf("Nhap vao id can tim: ");
	int a;
	scanf("%d", &a);
    int i;
    int f=0;
    for(i=0; i<n; i++){
        if(list[i].id==a){
        	//printf("%d", i);
            displayData(list[i]);
            f = 1;
        }
    }
    if(f = 0 || list[i].role != "\0"){
    	printf("Khong co nv nao co id nhu tren \n");
    }
    getchar();
}

static int i = 0; //giu lai gia tri cua i sau moi lan goi ham

void addP(struct Employee list[], int n) {

    int f;
    //getchar();
    do {
        f = 0;
        int a, b;
        printf("Nhap vao id nv %d: ", i + 1);
        //scanf("%d", &list[i].id);
        //KHI INPUT khac so scanf tra ve gia tri khong xac dinh, sscanf tra ve 0
        char input[50];
        fgets(input, 50, stdin);
        int check = sscanf(input, "%d", &list[i].id);

        if (check != 1) {
            printf("HAY NHAP VAO 1 SO. \n");
            f = 1;
        }
        for (b = 0; b < i; b++) {
            if (list[i].id == list[b].id) {
                printf("ID BI LAP\n");
                f = 1;
            }
        }
        a++;
    } while (f == 1);

    char demo[50];
    do {
        printf("Nhap vao ten nv %d: ", i + 1);
        //getchar();
        fgets(demo, 50, stdin);
        int demo1;
        int check = sscanf(demo, "%d", &demo1);
        //printf("%d", check);
        if (check != 0) {
            printf("HAY NHAP VAO CHUOI KI TU. \n");
            f = 1;
        } else {
            f = 0;
        }
    } while (f == 1);

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

    do {
        f = 0;
        char input[30];
        printf("Nhap vao chuc vu %d: ", i + 1);
        fgets(list[i].role, 30, stdin);
        int check = sscanf(list[i].role, "%d", &input);
        if (check != 0) {
            printf("HAY NHAP VAO CHUOI KI TU. \n");
            f = 1;
        }
    } while (f == 1);

    do {
        f = 0;
        char input[20];
        printf("Nhap vao luong cua nv %d: ", i + 1);
        fgets(input, 20, stdin);
        int check = sscanf(input, "%d", &list[i].salary);
        if (check != 1) {
            printf("HAY NHAP VAO 1 SO. \n");
            f = 1;
        }
    } while (f == 1);

    printf("%s", "\n");
    i++;
}

void deleteP(struct Employee list[], int n){
    printf("Nhap vao id nv can xoa: ");
    int a;
    scanf("%d", &a);
    int k;
    int f=0;
    for(k=0; k<n; k++){
        if(list[k].id == a){
            int j;
            for(j=k; j<=i; j++){
                //printf("%d", i);
                deleteStruct(list, j);
            }   
            f = 1;
			printf("Da xoa nhan vien\n");
            break;
        }
    }
    if(f == 0){
        printf("Khong co nv nao co id nhu tren \n");
    }
    i--;
    getchar();
}

void sortNameAZ(struct Employee list[], int n){
	int k, j;
	int a=0;
	int f=0;
	for (k = 0; k < n; k++) {
        for (j = i-1; j > k; j--) {
        	f=0;
        	a=0;
        	while(f == 0){
	            if (strcmp(list[j].name[a], list[j - 1].name[a]) < 0) {
	            	swapStruct(list, j, j-1);
	            	f=1;
	            }else if(strcmp(list[j].name[a], list[j - 1].name[a]) > 0){
	            	f=1;
	            } else{
		            a++;
		        }
			}
	    }
	}
}

