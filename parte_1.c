#include <stdio.h>
#define Qtd_elementos 5

double fc1 (double arr[], int size)
{
    return arr[0] + arr[1];
}

double fc2 (double arr[], int size)
{
    return arr[2] - arr[3];
}

double fc3 (double arr[], int size)
{
    return arr[size-1] * 2;
}

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