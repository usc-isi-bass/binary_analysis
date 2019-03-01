#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void main()
{
char num[50];
int answer=0,i,j,a,b,n,an[50];
scanf("%d%s%d",&a,num,&b);

n=strlen(num);
for(i=0;i<n;i++)
{
if(num[i]>47&&num[i]<58)
answer=answer+(num[i]-48)*pow(a,n-i-1);
if(num[i]>64&&num[i]<91)
answer=answer+(num[i]-55)*pow(a,n-i-1);
if(num[i]>96&&num[i]<123)
answer=answer+(num[i]-87)*pow(a,n-i-1);
}

for(j=0;;j++)
{
i=answer%b;
answer=(answer-i)/b;
if(i>=0&&i<10)
an[j]=i+48;
if(i>=10)
an[j]=i+55;
if(answer==0)
break;

}
for(i=j;i>=0;i--)
printf("%c",an[i]);
}