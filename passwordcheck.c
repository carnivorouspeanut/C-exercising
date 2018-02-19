#include <stdio.h>
#include <string.h>

int ComparePasswords(char in[6]){
	char password[6] = "123456";
	if (strcmp(in, password) == 0){
		return 1;
	}
	else{
		return 0;
	}
	
}

void MainFunction(void){
	printf("%s\n", "enter the password:");
	char password[6];
	scanf("%s", password);
	if (ComparePasswords(password) == 0){
		return MainFunction();
	}
	if (ComparePasswords(password) == 1){
		printf("%s\n", "valid password!");
	}
}

void main(void){
	MainFunction();
}