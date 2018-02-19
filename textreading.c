#include <stdio.h>

void main(void){
	int size = 2;
	char str[2];
	int i;
	scanf("%s", str);
	for (i = 0; i <= size; i++){
		printf("%c", str[i]);
	}
}