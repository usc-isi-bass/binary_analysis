/*************************************************************************
    > File Name: a_to_f.c
    > Author: One
    > Mail:838260772@qq.com 
    > Created Time: 2014年06月19日 星期四 16时12分22秒
 ************************************************************************/

#include<stdio.h>//字符串转化成浮点数
#include<stdlib.h>
#include<string.h>
int main()
{
char str[256];
double a=0;
double d=1.00f;
int i=0,j=0;
memset(str,0,sizeof(str));
fgets(str,sizeof(str),stdin);
if(str[i]=='-')
    i++;

while(str[i]!='\n'&&str[i]!='.')
{
a=10*a+str[i]-'0';
i++;
}
i++;

while(str[i]!='\n')
{
d=d/10.0;
a+=(str[i]-48)*d;
i++;
j++;
}

if(str[0]=='-')
a=-1*a;
return 0;
}
