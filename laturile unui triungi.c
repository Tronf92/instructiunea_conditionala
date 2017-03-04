#include <stdio.h>
#include <conio.h>
void main(void) {
int a,b,c;
printf("a=");scanf("%d",&a);
printf("\nb=");scanf("%d",&b);
printf("\c=");scanf("%d",&c);
if ((a<b+c) && (b<a+c) && (c<a+b))
    puts("pot fi laturile unui triunghi");
else
    puts("nu pot fi laturile unui triunghi");
getchar();
}
