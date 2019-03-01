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
z[j]=s[j];
if(s[j+3]=='\0'&&s[j]=='i')
{
z[j]='\0';
}
if(s[j+2]=='\0'&&s[j]=='e'&&s[j+1]=='r')
{
z[j]='\0';
}
if(s[j+2]=='\0'&&s[j]=='l'&&s[j+1]=='y')
{
z[j]='\0';
}
}
printf("%s\n",z);
}
return 0;
}