#ifndef HW05S12_H
#define HW05S12_H

typedef struct Student {
    int id;
    char name[20][20];
    int nameWords;
    int age;
    int grade;
    float mark;
};

int countSpaces(char arr[], int n);
void swapStruct(struct Student list[], int n, int m);
void displayData(struct Student list);
void findStd(struct Student list[], int n);
void updateData(struct Student list[], int n);
void findStdName(struct Student list[], int n);
void sortMarkUp(struct Student list[], int n);
void sortMarkDown(struct Student list[], int n);
void sortNameAZ(struct Student list[], int n);
void sortNameZA(struct Student list[], int n);

#endif
