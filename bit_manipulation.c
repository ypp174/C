#include <stdio.h>

int  multiplyAB(int a,int b)
{
//Watch video https://youtu.be/xrUCL7tGKaI
    int res = 0;
    while (a>0)
    {
        if(a&1)
            res = res+b;
        a=a>>1;
        b=b<<1;
    }
    return res;
}

int main()
{
    int a = 24;
    int b = 16;

    printf("\n");
    printf(" %d Multiply By %d = %d\n",a,b,multiplyAB(a,b));
    printf("\n");
    printf(" %d Multiply By 2 = %d\n",a, a<<1);
    printf(" %d Multiply By 8 = %d\n",a, a<<3);
    printf(" %d Multiply By 10 = %d\n",a, (a<<3)+(a<<1));  //10=8+2
    printf(" %d Multiply By 15 = %d\n",a, (a<<4)-a);
    printf("\n");
    printf(" %d Divide By 2 = %d\n",a, a>>1);
    printf(" %d Divide By 16 = %d\n",a, a>>4);
    printf("\n");

    printf(" %d Multiply By 7/8 = %d  ---- Method 1\n",a, ((a<<3)-a)>>3);
                                /*OR*/
    printf(" %d Multiply By 7/8 = %d  -----Method 2\n",a, a-(a>>3));  //7n/8 = (8-1)n/8 = 8n/8-1n/8 = n - n/8
    printf("\n");

return 0;
}
