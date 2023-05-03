#include <stdio.h>
int isPrime(int n)
{
    if(n==1)
        return 0;

    for (int i=2; i<n; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    if(isPrime(n)==0)
    {
        printf("Not prime number");
    }
    else
    {
        printf("Prime Number");
    }
}
