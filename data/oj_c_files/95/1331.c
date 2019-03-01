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
char str1[80],str2[80];
int i,m=0;
gets(str1);
gets(str2);
for(i=0;str1[i]!='\0'&&str2[i]!='\0';i++)
{
if(str1[i]>=65&&str1[i]<=90) str1[i]=str1[i]+32;
if(str2[i]>=65&&str2[i]<=90) str2[i]=str2[i]+32;
if(str1[i]>str2[i]) {printf(">\n"); m=m+1;break;}
else if(str1[i]<str2[i]) {printf("<\n");m=m+1;break;}


}
if(m==0) 
{
	if(str1[i]=='\0'&&str2[i]=='\0')
	printf("=");
    else if(str1[i]!='\0') printf(">");
	else printf("<");


}
return 0;
}