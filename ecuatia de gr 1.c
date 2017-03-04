#include <stdio.h>
int main(void) {
 int a,b;
 float x;
 printf("programul rezolva ecuatia de gradul 1 a*x+b=0");
 printf("\nIntroduceti doi intregi pentru  a si  b separate prin spatiu\n");
 scanf("%d %d",&a,&b);
 if (a!=0)
	{
		x=(float) -b/a;
		printf( "Solutia este %f",x);
	}
 else
    if (b!=0)
		printf("Nu exista solutii");
    else
        printf("Exista o infinitate de solutii");
 return 0;
}
