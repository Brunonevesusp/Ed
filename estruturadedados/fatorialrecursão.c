#include <stdio.h>

int fatorial(int x);


int main()
    {

        int n; 
        printf("Digite um valor maior que zero:\n");
        scanf("%d", &n);

        printf("%d",fatorial(n));
    return 0;
    }

int fatorial(int x)
{
if (x == 0 || x == 1)
{
    return 1;
} else
{

    return x * fatorial(x-1);

}


}

