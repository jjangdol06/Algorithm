#include <stdio.h>

int main(void){
    int a, b, c, i, j, temp, index;
    int number[3];
     for(i = 0; i < 3; i++){
        scanf("%d", &number[i]);
    }

    for(i = 0; i < 3; i++){
        int min = 10000000;
        for(j = i; j<3; j++){
            if(number[j] < min){
                min = number[j];
                index = j;
            }
        }
        temp = number[i];
        number[i] = number[index];
        number[index] = temp;
    }

    for(i = 0; i < 3; i++){
        printf("%d ", number[i]);
    }

    return 0;
}