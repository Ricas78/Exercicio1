#include <stdio.h>
#include "fc1.h"
#include "fc2.h"
#include "fc3.h"

#define Qtd_elementos 5

int main ()
{
    double array[Qtd_elementos] = {1.0, 2.0, 3.0, 4.0, 5.0};

    double resultado1 = fc1(array, Qtd_elementos);

    double resultado2 = fc2(array, Qtd_elementos);

    double resultado3 = fc3(array, Qtd_elementos);

    printf("resultado fc1: %f\n", resultado1);
    printf("resultado fc2: %f\n", resultado2);
    printf("resultado fc3: %f\n", resultado3);

    return 0;

}