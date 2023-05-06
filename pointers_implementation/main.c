#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void powerCalculation();
unsigned int *allocate(unsigned int *number);
unsigned int power(unsigned int *X, unsigned int *Y);
void deallocate(unsigned int *number);


int main()
{
    setlocale (LC_ALL,"portuguese");
    void powerCalculation();

    return 0;
}

unsigned int *allocate(unsigned int *number){
    return number = (unsigned int*)malloc(sizeof(unsigned int));
}

void deallocate(unsigned int *number){
    free(number);
    number = NULL;
}

void powerCalculation(){

    unsigned int *number, *number1, *result;
    number = allocate(number);
    number1 = allocate(number1);
    result = allocate(result);

    *result = power(number,number1);
    printf("%u",*result);

    deallocate(number1);
    deallocate(number);
    deallocate(result);
}

unsigned int power(unsigned int *X,unsigned int *Y){
    printf("what is the first number?\n");
    scanf("%u",X);
    printf("what is the second number?\n");
    scanf("%u",Y);
    return pow(*X,*Y);
}
