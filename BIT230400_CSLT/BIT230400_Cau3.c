#include <stdio.h>

struct Book{
	char title[100];
	int year;
	float price;
};

int main(){
	struct Book list[100];
	FILE *file;
	int n, i;
	printf("Nhap vao so cuon sach: ");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		printf("Nhap vao ten cuon sach thu %d: ", i+1);
		getchar();
		fgets(list[i].title, sizeof(list[i].title), stdin);
		printf("Nhap vao nam xuat ban cuon sach thu %d: ", i+1);
		scanf("%d", &list[i].year);
		printf("Nhap vao gia cua sach thu %d: ", i+1);
		scanf("%f", &list[i].price);
		printf("\n");
		//printf("Ten sach 1: %s", list[i].title);
		//printf("Nam xuat ban: %d\n", list[i].year);
		//printf("Gia: %f\n", list[i].price);
	}
	
	file = fopen("book.dat", "w");
	if(file != NULL){
	fprintf(file, "%d\n", n);
		for(i=0; i<n; i++){
			fprintf(file, "Ten sach %d: %s", i+1, list[i].title);
			fprintf(file, "Nam xuat ban: %d\n", list[i].year);
			fprintf(file, "Gia: %f\n", list[i].price);	
			fprintf(file, "\n");		
		}
		fclose(file);
	} else{
		printf("ERROR");
	}
	return 0;
}
