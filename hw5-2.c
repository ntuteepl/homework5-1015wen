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
        printf("%.1f",c);
    }
    else if(800<a&&a<1500)
    {
        c=a*0.81;
        printf("%.1f",c);
    }
    else if(a>=1500)
    {
        c=a*0.711;
        printf("%.1f",c);
    }




    return 0;
}
