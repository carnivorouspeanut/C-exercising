#include <stdio.h>

float fahr_to_cels(float fahr){
	return (5.0/9.0)*(fahr-32.0);
}	





void main(void){
float fahr;
for (fahr = 300.0; fahr >= 0.0; fahr = fahr - 20.0){
    printf("%3.0f\t%6.1f\n", fahr, fahr_to_cels(fahr));
}
}
