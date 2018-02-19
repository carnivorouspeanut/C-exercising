#include<stdio.h>

void main(void){
	int i;
	scanf("%i", &i);

	FILE *f = fopen("number.txt", "w");
	fprintf(f, "%i\n", i);
	fclose(f);

	FILE *file = fopen("number.txt", "r");
	int answer;
	fscanf(file, "%i", &answer);
	printf("%i\n", answer);
	fclose(file);

}