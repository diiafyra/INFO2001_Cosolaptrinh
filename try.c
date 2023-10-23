#include <stdio.h>

int main (){
	printf("Say hi: ");
	char greeting[100];
	scanf("%s", greeting);
	if(strcmp(greeting,"hi") == 0){
	printf("Annhon, this is trangdi");
	} else{
		printf("Type 'hi', please: ");
	} 
	return 0;
}
