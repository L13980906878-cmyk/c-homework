//202611716116
//郎咸博
#include <stdio.h>
#include<stdlib.h>
#include<stdint.h>

int main()
{
    float a;
    float b;
    float c;
scanf("%f %f %f",&a,&b,&c);
if (a+b>=c&&b+c>=a&&a+c>=b)
{printf("能构成三角形");}
else
{printf("不能构成三角形");}


    return 0;
}
