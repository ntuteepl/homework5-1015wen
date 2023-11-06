#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h,m;
    double c,d,e;

    scanf("%f%f",&h,&m);//h小時m分鐘
    if(h>=1&&h<=12&&m>=0&&m<=59)
    {
        d=m*6;
        if(m>=0&&m<=12)
        {
            c=h*30+6*(m/12);
        }
        if(m>12&&m<=24)
        {
            c=h*30+6+6*(m-12)/12;
        }
        if(m>24&&m<=36)
        {
            c=h*30+12+6*(m-24)/12;
        }
        if(m>36&&m<=48)
        {
            c=h*30+24+6*(m-36)/12;
        }
        if(m>48&&m<=59)
        {
            c=h*30+36+6*(m-48)/12;
        }
        //e=d-c;
        if(d>c)
        {
            e=d-c;
            if(e>180)
            {
                e=360-e;
                printf("%.3f",e);
            }
            else
            {
                printf("%.3f",e);
            }
        }
        if(d<c)
        {
            e=c-d;
            if(e>180)
            {
            e=360-e;
            printf("%.3f",e);
            }
            else
            {
                printf("%.3f",e);
            }
        }
        
    }
    

    return 0;
}
