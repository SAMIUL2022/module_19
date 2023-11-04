#include <stdio.h>

void fun (int n)
{
if (n==0)
{
  return ;
}
else{
     fun(n/10);
     int digit =n%10;
     if (n==0)
     {
        printf("%d",digit);
     }
     else
     printf("%d ",digit);
}


}
int main ()
{
int m;
scanf("%d",&m);
int n;
for (int i = 0; i < m; i++)
{
    scanf("%d",&n);
if (n==0)
    {printf("%d\n",n);
    }
    else{
    fun(n);
    printf("\n");}

}





    return 0;
}