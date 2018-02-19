#include <stdio.h>
#include <stdlib.h>

int MAXLINE = 100;
main(){
	int c, i, j, len;
	len = 0;
	char additional[MAXLINE];

	while (((c = getchar()) != '\n') && (c != EOF)){
		additional[len] = c;
		len ++;
		}

	char string[len + 1];
	for (i = 0; i < (len+1); i++){
		string[i] = additional[i];
		if (string[i] == '\t'){
			string[i] = ' ';
			}
		printf("%c", string[i]);
		}
	string[len + 1] = '\n';
	printf("%c", string[len + 1]);


}	