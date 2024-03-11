#include <stdio.h>
#include <iostream>

int main()
{
    long long int t,i;
    scanf("%lld",&t);
    long long int a,b,temp;
    for(i=0; i<t; i++)
    {
        scanf("%lld",&a);
        scanf("%lld",&b);
        if(a<b)
        {
            temp=a;
            a=b;
            b=temp;
        }

        if(a>2*b)
        {
            printf("NO\n");
        }
        else
        {
            if((a+b)%3==0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
}
