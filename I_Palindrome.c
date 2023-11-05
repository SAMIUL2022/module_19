#include <stdio.h>
#include <string.h>
int main ()
{
char a[1001],b[1001];
scanf("%s",&a);
strcpy(b,a);
int s=strlen(b);

    for (int i = 0; i < s/2; i++)
    {
       
            int temp=b[i];
            b[i]=b[s-1-i];
            b[s-1-i]=temp;
        }
        
    
    
int k=strcmp(a,b);
if (k==0)
{
   printf("YES");
}
else
printf("NO");



    return 0;
}