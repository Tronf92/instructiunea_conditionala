#include <stdio.h>
int main()
{
    float  a,b,c,max;
    printf("\nIntroduceti trei numere reale a , b si c separate prin spatiu \n");
    scanf("%f %f %f",&a,&b,&c);
    if (a<=b)
        if (c<=b)
            max=b;
        else
            max=c;
    else
        if (c<=a)
            max=a;
        else
            max=c;
    printf("\nmaximul dintre  a=%f b=%f si c%f este max=%f\n",a,b,c,max);
    return 0;
}
