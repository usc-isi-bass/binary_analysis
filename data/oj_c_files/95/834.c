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

void zhuan(char str[80])
{
	int t;
	for(t=0;str[t]!='\0';t=t+1)
		if(str[t]>='A'&&str[t]<='Z')str[t]=str[t]+32;
}
void main()
{
	char a[80]={0};
	char b[80]={0};
 int i,n;

 gets(a);
 gets(b);
 zhuan(a);
 zhuan(b);

n=0;
 for(i=0;a[i]!='\0'&&b[i]!='\0';i=i+1)
	{ if(a[i]==b[i])n=n+1;
 if(a[i]!=b[i])break;}
	 

 if(a[n]>b[n])printf(">");
if(a[n]==b[n])printf("=");
if(a[n]<b[n])printf("<");

}
