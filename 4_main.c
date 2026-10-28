//202611716116
//郎咸博
#include <stdio.h>
#include<stdlib.h>
#include<stdint.h>

int main()
{
    float a;
printf("你的成绩是？");
scanf("%f",&a);
if(a>100||a<0)
{printf("输入无效");}
else
{
    if(a>=90)
    {printf("A");}
    else if (a>=80)
    {printf("B");}
    else if (a>=70)
    {printf("C");}
    else if (a>=60)
    {printf("D");}
    else 
    {printf("E");}
}
return 0;





}