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
char p[100];
char q[100];
gets(p);
gets(q);
int m,n;
m=strlen(p);
n=strlen(q);
for(int i=0;i<m;i++)
{if(p[i]>=97&&p[i]<=122)
p[i]=p[i]-32;}
for(int k=0;k<n;k++)
{if(q[k]>=97&&q[k]<=122)
q[k]=q[k]-32;}
int t;
t=strcmp(p,q);
if(t==0)
printf("=");
else if(t>0)
printf(">");
else
printf("<");
return 0;
}