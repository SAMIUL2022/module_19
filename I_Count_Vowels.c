#include <stdio.h>
#include<string.h>
int fun (char *a,int i)
{
if (a[i]=='\0') return 0;

int cmt=fun(a,i+1);
if (a[i]>='A'&& a[i]<='Z')
{
    a[i]=a[i]+32;
}
if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
{
   return cmt+1;
}
   else return cmt;




}


int main ()
{
char a[201];
fgets(a,201,stdin);

int k=fun(a,0);
printf("%d",k);

    return 0;
}