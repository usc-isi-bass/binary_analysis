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

main()
{
long long int e,d,i,j,k,q,sum=0;
int a,b=0;
int w[1000];

char c[10000];
char t[10000];
scanf("%d %s %d",&a,c,&b);
d=strlen(c);
sum=0;
q=1;
for(i=0;i<=(d-1);i++)
{
e=0;
if((c[i]>='A')&&(c[i]<='Z'))
e=c[i]-'A'+10;
else
{
if((c[i]>='a')&&(c[i]<='z'))
e=c[i]-'a'+10;
else 
e=c[i]-'0';
}
for(j=1;j<=d-1-i;j++)
e=e*a; 
sum=sum+e; 
}
for(k=1;;k++)
{
q=q*b;
if(q>sum)
break;
}
for(i=k-1;i>=0;i--)
{
w[i]=sum%b;   
sum=sum-w[i];
sum=sum/b;
}

for(j=0;j<k;j++)
{

if(w[j]>=10)
t[j]=w[j]+'A'-10;
else
t[j]=w[j]+'0';
}

printf("%s",t);
printf("\n");
getchar();
getchar();
getchar();
}





