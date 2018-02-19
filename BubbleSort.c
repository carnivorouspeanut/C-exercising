#include <stdio.h>

void BubbleSort(int mas[], int length){
	int i;
	int k;
	int buffirst;
	int buffsecond;
	for (i = 0; i < length; i++){
		for (k = length - 2; k >= 0; k--){
			if (mas[k] > mas[k + 1]){
				buffirst = mas[k];
				buffsecond = mas[k + 1];
				mas[k] = buffsecond;
				mas[k + 1] = buffirst;
			}
		}
		
	}
	
}

void main(void){
	int massive[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	BubbleSort(massive, 10);
	int j;
	for (j = 0; j<10; j++){
    		printf("%i ", massive[j]);
	}
}