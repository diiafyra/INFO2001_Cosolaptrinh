#ifndef HW05S12_H
#define HW05S12_H

typedef struct Student {
    int id;
    char name[20][20];
    int nameWords;
    int age;
    int grade;
    float mark; 
}std;

float isFloat();
int isInteger();
int countSpaces(char arr[], int n);
void swapStruct(std list[], int n, int m);
void displayData(std list);
void findStd(std list[], int n);
void updateData(std list[], int n);
void findStdName(std list[], int n);
void sortMarkUp(std list[], int n);
void sortMarkDown(std list[], int n);
void sortNameAZ(std list[], int n);
void sortNameZA(std list[], int n);

#endif
