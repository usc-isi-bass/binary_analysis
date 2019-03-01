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

int main()
{
char s1[80],s2[80];
int n,m,s,a,b;
gets(s1);
gets(s2);
for(n=0,m=0;s1[n]!='\0';n++)
{
	a=n;
if(s1[n]==s2[n]||s1[n]-s2[n]==32||s1[n]-s2[n]==-32)m++,b=m;
if((s1[n]>s2[n]&&s1[n]-s2[n]>32)||(s1[n]<s2[n]&&s1[n]-s2[n]>-32))
{
	printf(">");
	break;
}
if((s1[n]>s2[n]&&s1[n]-s2[n]<32)||(s1[n]<s2[n]&&s1[n]-s2[n]<-32))
{
	printf("<");
	break;
}
}
if(a==b-1)printf("=");
return 0;
}