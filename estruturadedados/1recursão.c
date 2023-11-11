#include <stdio.h>

void imprime(int x);


int main()
    {

        int n; 
        printf("Digite um valor maior que zero:\n");
        scanf("%d", &n);

        imprime(n);
    return 0;
    }

void imprime(int x)
{
if (x == 0)
{
    printf("%d", x);
} else
{

    printf("%d\n", x);
    imprime(x-1);

}


}

