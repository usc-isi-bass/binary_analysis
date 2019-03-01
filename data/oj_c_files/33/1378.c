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

int main(){
int n,i,j=0,k;
char s[1000];
char z[1000];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",s);
for(j=0;s[j]!='\0';j++)
{
if(s[j]=='A')
{
z[j]='T';
}
if(s[j]=='T')
{
z[j]='A';
}
if(s[j]=='C')
{
z[j]='G';
}
if(s[j]=='G')
{
z[j]='C';
}
if(s[j+1]=='\0')
{
z[j+1]='\0';
}
}
printf("%s\n",z);
}
return 0;
}