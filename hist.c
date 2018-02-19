#include <stdio.h>
void main(void){
	int ndigit[10];
	int c, i, j;
	for (i = 0; i < 10; i++){
		ndigit[i] = 0;
	}
	while ((c = getchar()) != EOF){
		if (c >= '0' && c <= '9'){
			ndigit[c - '0']++;
		} 
	}
for (i = 0; i < 10; i++){
	for (j = 0; j < ndigit[i]; j++){
		printf("%s", "|");
	}
printf("\n");
}
}