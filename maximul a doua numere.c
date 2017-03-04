/*Programul afișează  maximul a doi întregi */
#include <stdio.h>
int main()
{
int a,b,c;
printf("\nIntroduceti doi intregi a si b separati prin spatiu\n");
scanf("%d %d",&a,&b);
c=a>b?a:b;
printf("\nmaximul dintre  a=%d si b=%d este c=%d\n",a,b,c);
return 0;
}
