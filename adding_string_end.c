#include <stdio.h>

void main(void){
	char str1[] = "all we need is loove";
	char str2[] = "sleep";
	int l1 = strlen(str1);
	int l2 = strlen(str2);
	int start = l1 - l2;
	char *p;
	p = &str1[0];
	p += start;
	char *p2;
	p2 = &str2[0];
	while ((*p = *p2) != '\0'){
		p++;
		p2++;
	}
printf("%s\n", str1);
}