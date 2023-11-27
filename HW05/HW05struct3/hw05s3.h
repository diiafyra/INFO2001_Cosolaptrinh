#ifndef HW05S3_H
#define HW05S3_H

//ifndef khai bao truoc define

typedef struct Employee{
    int id;
    char name[20][20];
    int nameWords;
    char role[30];
    int salary;
	};

int isInteger();
int countSpaces(char arr[], int n);
void swapStruct(struct Employee list[], int n, int m);
void deleteStruct(struct Employee list[], int n);
void displayData(struct Employee list);
int findId(struct Employee list[], int n);
void adP(struct Employee list[], int n);
void deleteP(struct Employee list[], int n);
void sortNameAZ(struct Employee list[], int n);

#endif
