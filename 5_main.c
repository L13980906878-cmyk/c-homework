//202611716116
//郎咸博
#include <stdio.h>
#include<stdlib.h>
#include<stdint.h>

int main()
{
    float a,c;
    float d=0;
    char b;
printf("输入：");
scanf("%f %c %f",&a,&b,&c);
if (b!='+'&&b!='-'&&b!='*'&&b!='/')
{printf("不支持的运算符");}
else{
if (b=='+')
{
d=a+c;
 printf("%.2f",d);
}
else if (b=='-')
{
    d=a-c;
    printf("%.2f",d);
}
else if (b=='*')
{
    d=a*c;
    printf("%.2f",d);
}
else if (b=='/')
{if(c == 0)
    {printf("除数不能为零");}
 else   
    {d=a/c;
    printf("%.2f",d);}
}
}
    return 0;
}