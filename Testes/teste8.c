#include <stdio.h>

int main (){

    int a = 10;
    int b = 3;
    float quociente = (float) a / b; //'a' é convertido automaticamente para float
    //se tirar o '(float)' altera o resultado - se chama 'casting'

    printf("quociente: %.2f \n", quociente);

    return 0;










}