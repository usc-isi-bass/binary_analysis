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

 void main ()
{
	char a[300];
	int i,b[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},m,yes=0;
	
	scanf("%s",a);
m=strlen(a);
	
for(i=0;i<m;i++)
{if(a[i]>='a'&&a[i]<='z'){yes=1;
b[a[i]-'a']++;}}
if(yes==0)
printf("No\n");
for(i=0;i<26;i++)
{	if(b[i]!=0)
{printf("%c=%d\n",(i+'a'),b[i]);}
}

	
}