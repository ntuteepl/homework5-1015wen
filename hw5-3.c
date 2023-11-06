#include <stdio.h>

int main()
{
    float a,s;
    double c;
    scanf("%f%f",&a,&s);
    printf("%.0f %.0f\n",a,s);
    if(a<=60)
    {
        c=a*s;
        printf("%.1f\n",c);
    }
    if(a>60&&a<=120)
    {
        c=60*s+(a-60)*s*1.33;
        printf("%.1f\n",c);
    }
    if(a>120)
    {
        c=60*s+60*s*1.33+(a-120)*s*1.66;
        printf("%.1f\n",c);
    }

    return 0;
}

