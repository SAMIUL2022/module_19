#include <stdio.h>
int main ()
{
int n;
scanf("%d",&n);
int a[n];

for (int i = 0; i < n; i++)
{
    
    {
        scanf("%d",&a[i]);
    }
    
}
int q;
scanf("%d",&q);
int index=-1;
for (int i = 0; i < n; i++)
{
    
    
        if (a[i]==q)
        {index=i;
           break;
        }
}


printf("%d\n",index);
    return 0;
}