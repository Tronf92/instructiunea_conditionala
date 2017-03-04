#include <stdio.h>
#include <math.h>
int main()
{
float a,b,c,delta,x1,x2;
printf("\n Calculeaza radacinile ecuatiei de gradul 2\n\ta*x^2 +b*x +c =0\n");
printf(" Introduceti  valori reale pentru a, b, si c separate prin spatiu\n");
scanf("%f %f %f",&a,&b,&c);
if (a!=0)
{
 delta=b*b-4*a*c;
 if (delta >= 0)
 {
    x1=(-b-sqrt(delta))/(2*a);
    x2=(-b+sqrt(delta))/(2*a);
    printf("\n Solutiile sunt x1=%g si x2=%g \n",x1,x2);
 }
 else
 {
    x1=-b/(2*a);
    x2=sqrt(-delta)/(2*a);
    printf("\n\nEcuatia are radacini complexe x1=%g-j*%g\ si x2=%g+j*%g\n",x1,x2,x1,x2);
 }
}
else printf("\nEcuatia nu este de gradul 2 adica a=0\n");
 return 0;
}
