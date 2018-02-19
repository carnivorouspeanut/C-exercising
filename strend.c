#include <stdio.h>

int end(str1, str2){
	int l1 = strlen(str1);
	int l2 = strlen(str2);
	if (l2 > l1){
		printf("%s\n", "no");
		return 0;
	}
	else{
		char *p1;
		char *p2;
		p1 = str1;
		int start = l1 - l2;
		p1 += start;
		p2 = &str2;
		char str3[4];
		char *p3;
		p3 = &str3[0];
		while ((*p3 = *p1) != '\0'){
			p3++;
			p1++;
		}
		if (strcmp(str2, str3) == 0){
			printf("%s\n", "yeeeey");
			return 1;
		}
		else{
			printf("%s\n", "nonononono");
		}
	}

}

void main(void){
	end("Lelya is lazy", "loozy");	
}