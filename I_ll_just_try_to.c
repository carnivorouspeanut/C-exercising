#include <stdio.h>

void main(void){
int st[] = {0, 1, 2, 3, 4};
int t[] = {10, 20, 30};
int *p1;
int *p2; 
p1 = &st[0];
p2 = &t[0];
int *p3;
p3 = &t[2];
	while ((*p1 = *p2) != *p3){
		p1++;
		p2++;
	}
int i;
for (i = 0; i < 5; i++){
printf("%i\n", st[i]);
}
}