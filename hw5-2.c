#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    double c;

    scanf("%f",&a);

    if(a<=800)
    {
        c=a*0.9;
        printf("%f",c);
    }
    else if(800<a<1500)
    {
        c=a*0.81;
        printf("%f",c);
    }
    else if(a>=1500)
    {
        c=a*0.79;
        printf("%f",c);
    }
    else
    {
        printf("錯");
    }


    return 0;
}

