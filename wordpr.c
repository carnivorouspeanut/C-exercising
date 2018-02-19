#include <stdio.h>
void main(void){
	int curlet;
	while ((curlet = getchar()) != EOF){
		if ((curlet = getchar()) != ' '){
			putchar(curlet);
		}
		else{
			//printf("\n");
			putchar('\n');
		}
	}
}