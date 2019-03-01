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

int main (int argc, char *argv[])
{ 
 char s1[100];
 char s2[100];
 int len1,len2;
 int i;
 gets(s1);
 gets(s2);
 len1=strlen(s1);
 len2=strlen(s2);
 for(i=0;i<len1;i++)
 {
	 if((s1[i]>=65)&&(s1[i]<=90))
	 {s1[i]=s1[i]+32;}
 }
for(i=0;i<len2;i++)
 {
	 if((s2[i]>=65)&&(s2[i]<=90))
	 {s2[i]=s2[i]+32;}
 }
if(strcmp(s1,s2)<0)
{printf("<");}
if(strcmp(s1,s2)==0)
{printf("=");}
if(strcmp(s1,s2)>0)
{printf(">");}
return 0;
}


