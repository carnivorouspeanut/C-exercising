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
	char string = "abcbcbcdefefefghihihi";
	int a = strlen(string);
	int n = a*a - a*(a - 1)/2;
	printf(n);
	char *substrings[n]; //array of ss in future
	int j;
	int count = 0;
	for (j = n; j >=0; j--){
		int i;
		for (i = 0; i <= (a - j); i++){
			char *p;
			p = substring(string, i, (i + j));
			char *p2;
			char str2[j];
			p2 = &str2[0];
			int k;
			for (k = 0; k <= j; k++){
				*p2 = *p;
				p++;
				p2++;
			}
			int elm;
			for (elm = 0; elm <= n; elm++){
				char *p3;
				char *p4;
				p3 = substrings[elm];
				int l;
				char str1[a];
				p4 = &str1[0];
				while (*p4 = *p3 != '\0'){
					p3++;
					p4++;
				}
				if (strcmp(str1, str2) == 0){
					printf("%s\n", str1);
					substrings[count] = p;
					count++;
				}
			}
	       }
	}
}