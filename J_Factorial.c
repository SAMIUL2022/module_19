#include <stdio.h>

long long int fact(long long int n)
{if (n==0)
{
    return 1;
}


long long int f=fact(n-1);
return n*f;



}
int main ()
{
int n;
scanf("%d",&n);
long long int fac=fact(n);
printf("%lld",fac);

    return 0;
}