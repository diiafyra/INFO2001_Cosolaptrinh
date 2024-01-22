#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *file = fopen("data.txt", "r+");
	char line[50];
	int i;
	int sizec=0;
	
	if (file != NULL) {
		i = 0;
		while (fgets(line, sizeof(line), file) && i < 2) {
			i++;
		}
		//sizec = sizec;
		//fseek(file, sizec, SEEK_SET);
		fgets(line, sizeof(line), file);
		printf("%s", line);
	//fclose(file);
	}
	printf("Nhap noi dung: ");
	fgets(line, 50, stdin);
	fputs(line, file);

	fclose(file);
	
}
