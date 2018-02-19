#include <stdio.h>
#include <string.h>
#include<stdlib.h>

char* substring(char* str, int start, int stop){
	char *result;
	int len = (stop - start + 1);
	char ss[len];
	int i;
	for (i = 0; i < len; i++){
		ss[i] = str[start + i];
	}
	result = ss;
	printf("%s\n", ss);
	return result;
}



void main(void){
	char string[] = "abcdef";
	int a = strlen(string);
	int n = a*a - a*(a - 1)/2;
	char** substrings;
	substrings = (char**)calloc(sizeof(char*), n);
	int start;
	int stop;
	int count = 0;
	for (stop = 0; stop <= a - 1; stop++){
		for (start = 0; start <= stop; start++){
			printf("%d\t%d\n", start, stop);
			substrings[count] = substring(string, start, stop);
			count++;
		}
	}
/*	int number;
	for (number = 0; number <= n; number++){
		//char *p;
		char **p2;
		//char res[] = "abcdef";
		//p = &res[0];
		p2 = substrings[number];
		//while (*p = **p2 != '\0'){
			//p++;
			//p2++;
		//}
		printf("%s\n", **p2);
	
	} */
	
}