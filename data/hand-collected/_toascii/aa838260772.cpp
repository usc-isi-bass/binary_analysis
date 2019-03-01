/*************************************************************************
    > File Name: f_to_a.c
    > Author: One
    > Mail:838260772@qq.com 
    > Created Time: 2014年06月19日 星期四 18时38分49秒
 ************************************************************************/

#include <stdio.h>
int main()
{
double a;
char str[256];
scanf("%lf",&a);
if(a<0)
{
putchar('-');
a=-1*a;
}
int d=(int)a;
float s=a-d;




return 0;
}