#include <stdio.h>
#include <math.h>
int Binario_a_decimal(long long n);
int main()
{
     long num;
    printf("Ingrese el numero binario: ");
    scanf("%lld", &num);
    printf("%lld en binario = es %d en decimal", num, Binario_a_decimal(num));
    return 0;
}
int Binario_a_decimal(long long n)
{
    int numero = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        numero += remainder*powf(2,i);
        ++i;
    }
    return numero;
}
