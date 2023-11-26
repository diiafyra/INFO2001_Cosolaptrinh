#include <stdio.h>
#include <string.h>
#include "hw05s12.h"

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

void swapStruct(struct Student list[], int n, int m){
	int temp1 = list[n].id;
	list[n].id = list[m].id;
	list[m].id = temp1;
	
	int temp3 = list[n].nameWords;
	list[n].nameWords = list[m].nameWords;
	list[m].nameWords = temp3;
	
	int temp4 = list[n].age;
	list[n].age = list[m].age;
	list[m].age = temp4;
	
	int temp5 = list[n].grade;
	list[n].grade = list[m].grade;
	list[m].grade = temp5;
	
	float temp6 = list[n].mark;
	list[n].mark = list[m].mark;
	list[m].mark = temp6;
	
	
	char temp2[20][20];
    int a;
    for (a = 0; a < 20; a++) {
        strcpy(temp2[a], list[n].name[a]);
        strcpy(list[n].name[a], list[m].name[a]);
        strcpy(list[m].name[a], temp2[a]);
    }
	
}



void displayData(struct Student list){
	int i;
	//for(i=0; i<n; i++){
	    printf("Ma sinh vien: %d\n", list.id);
	    
	    int a, b;
	    for(a=list.nameWords; a>=0; a--){
	    	printf("%s ", list.name[a]);
		}
	    
	    /*char fullName[50];
	    strcpy(fullName, list[i].name[0]);
	    printf("%d", count);
	    int a = 1;
	    while(a < count){	
	    	strcat(fullName, list[i].name[a]);
	    	a++;
	    }*/
	    
	    printf("Tuoi: %d\n", list.age);
	    printf("Lop: %d\n", list.grade);
	    printf("Diem: %.2f\n", list.mark);
	    printf("\n");
	//}
}

void findStdId(struct Student list[], int n){
	printf("Nhap vao id can tim: ");
	int a;
	scanf("%d", &a);
    int i;
    int f=0;
    for(i=0; i<n; i++){
        if(list[i].id==a){
            displayData(list[i]);
            f = 1;
        }
    }
    if(f = 0){
    	printf("khong co sv nao co id nhu tren");
    }
}

void updateData(struct Student list[], int n){
	printf("Nhap vao id sinh vien can thay doi thong tin: ");
	int a;
	scanf("%d", &a);
    int i;
    int f = 0;
    for(i=0; i<n; i++) {
        if (list[i].id == a) {
        	f = 1;
        	
		char demo[50];
		do{
			f=0;
	        printf("Nhap vao ten sv %d: ", i+1);
	        getchar();
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
	        	char input[20];
	        	int in;
		        printf("Nhap vao tuoi sv %d: ", i+1);
		        fgets(input, 20, stdin);
		        int check = sscanf(input, "%d", &in);
		        if (check != 1){
		    		printf("HAY NHAP VAO 1 SO. \n");
		    		f=1;
				}
		    }while(f==1);
		    
		    do{
	        	f=0;
	        	char input[20];
	        	int in;
		        printf("Nhap vao lop sv %d: ", i+1);
		        fgets(input, 20, stdin);
		        int check = sscanf(input, "%d", &in);
		        if (check != 1){
		    		printf("HAY NHAP VAO 1 SO. \n");
		    		f=1;
				}
		    }while(f==1);
		    
		    do{
	        	f=0;
	        	char input[20];
	        	int in;
		        printf("Nhap diem cua sv %d: ", i+1);
		        fgets(input, 20, stdin);
		        int check = sscanf(input, "%f", &in);
		        if (check != 1){
		    		printf("HAY NHAP VAO 1 SO. \n");
		    		f=1;
				}
		    }while(f==1);
			
			printf("%s", "\n");     
        }
    }
    if(f = 0){
    	printf("khong co sv nao co id nhu tren");
    }
}

void findStdName(struct Student list[], int n){
	printf("Nhap vao ten sv can tim: ");
	getchar();
	char name[50];
	fgets(name, 50, stdin);
	//printf("%s", name);
    int i;
    int f=0;
    for(i=0; i<n; i++){
    	char fullName[50];
	    strcpy(fullName, list[i].name[list[i].nameWords]);
	    int a;
	    for(a = list[i].nameWords - 1; a>=0; a--){
			strcat(fullName, " ");
	    	strcat(fullName, list[i].name[a]);
	    }
	    //printf("%s", fullName);
        if(strcmp(name, fullName) ==0){
            displayData(list[i]);
            f = 1;
        }
    }
    if(f = 0){
    	printf("khong co sv nao co ten nhu tren");
    }
}

void sortMarkUp(struct Student list[], int n){
	int i, j, min_idx;
	for(i=0; i<n-1; i++){
		min_idx = i;
		for(j=i+1; j<n; j++){
			if(list[j].mark < list[min_idx].mark){
				min_idx=j;
			}
		}
		
		swapStruct(list, min_idx, i);
		
		/*int temp1 = list[min_idx].id;
		list[min_idx].id = list[i].id;
		list[i].id = temp1;
		
		int temp3 = list[min_idx].nameWords;
		list[min_idx].nameWords = list[i].nameWords;
		list[i].nameWords = temp3;
		
		int temp4 = list[min_idx].age;
		list[min_idx].age = list[i].age;
		list[i].age = temp4;
		
		int temp5 = list[min_idx].grade;
		list[min_idx].grade = list[i].grade;
		list[i].grade = temp5;
		
		float temp6 = list[min_idx].mark;
		list[min_idx].mark = list[i].mark;
		list[i].mark = temp6;
		
		
		char temp2[20][20];
	    int a;
	    for (a = 0; a < 20; a++) {
	        strcpy(temp2[a], list[min_idx].name[a]);
	        strcpy(list[min_idx].name[a], list[i].name[a]);
	        strcpy(list[i].name[a], temp2[a]);
	    }/*
	}
	/*int b;
	for(b=0; b < n; b++){
		displayData(list[b]);
	}*/
	}
}


void sortMarkDown(struct Student list[], int n){
	sortMarkUp(list, n);
	int start = 0;
	int end = n-1;
	
	while(start < end){
		swapStruct(list, start, end);
		
		/*char temp2[50];
		strcpy(temp2, list[start].name);
		strcpy(list[start].name, list[end].name);
		strcpy(list[end].name, temp2);	//them ghi chu
		*/
		
		start++;
		end--;	
	}
}

void sortNameAZ(struct Student list[], int n){
	int i, j;
	int a=0;
	int f=0;
	for (i = 0; i < n; i++) {
        for (j = n-1; j >i; j--) {
        	f=0;
        	a=0;
        	while(f==0){
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

void sortNameZA(struct Student list[], int n){
	int i, j;
	int a=0;
	int f=0;
	for (i = 0; i < n; i++) {
        for (j = n-1; j >i; j--) {
        	f=0;
        	a=0;
        	while(f==0){
	            if (strcmp(list[j].name[a], list[j - 1].name[a]) > 0) {
	            	swapStruct(list, j, j-1);
	            	f=1;
	            }else if(strcmp(list[j].name[a], list[j - 1].name[a]) < 0){
	            	f=1;
	            } else{
		            a++;
		        }
			}
	    }
	}
}

