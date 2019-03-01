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
	int k,i;
	char str1[80],str2[80];
	gets(str1);
	gets(str2);
for(i=0;str1[i]!='\0';i++)
 str1[i]=toupper(str1[i]);
for(i=0;str2[i]!='\0';i++)
 str2[i]=toupper(str2[i]);
if(strcmp(str1,str2)==0) k=0;
if(strcmp(str1,str2)>0) k=1;
if(strcmp(str1,str2)<0) k=-1;
	if(k==0) printf("=\n");
	else if(k==1) printf(">\n");
	else if(k==-1) printf("<\n");
}