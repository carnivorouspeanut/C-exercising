#include <stdio.h>
#include <string.h>
#include<stdlib.h>

char* substring(char* str, int start, int stop){
char* result;
result = (char*)malloc(sizeof(char)*(stop - start));
int i;
for (i = start; i <= (stop - start); i++){
result[i] = str[start + i];
}
return result;
}

void main(void){
char str1[] = "Hello";
char *p;
char *p2;
p = substring(str1, 0, 5);
char str2[5];
p2 = &str2[0];
int j;
for (j = 0; j <= 5; j++){
	*p2 = *p;
	p++;
	p2++;
}
printf("%s\n", str2);
if (strcmp(str1, str2) == 0){
	printf("finally!");
}
}