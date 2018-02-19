#include <stdio.h>
void main(void){
    int count = 0;
    int curstr;
    while ((curstr = getchar()) != EOF){
    if (curstr == '\n'){
        count++;
    }
}
    printf("\n%d\n", count);
}