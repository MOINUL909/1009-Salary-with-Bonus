/*moinul*/
#include <stdio.h>

int main() {
    char name[4];
    float sallary;
    double TOTAL,sells;
    scanf("%s%f%lf",&name,&sallary,&sells);
    TOTAL = sallary+(sells*15)/100;
    printf("TOTAL = R$ %.2lf\n",TOTAL);

    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */

    return 0;
}
