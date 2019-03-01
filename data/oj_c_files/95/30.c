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
	char str1[100],str2[100];
	gets(str1);
	gets(str2);
	int length1,length2;
	length1=strlen(str1);
	length2=strlen(str2);
	int i;
	for(i=0;i<length1;i++)
	{
		if(str1[i]<='z' && str1[i]>='a') 
        str1[i]-='a'-'A'; 
	}
	for(i=0;i<length2;i++)
	{
		if(str2[i]<='z' && str2[i]>='a') 
        str2[i]-='a'-'A'; 
	}
	if(strcmp(str1,str2)>0)
		printf(">\n");
	if(strcmp(str1,str2)<0)
		printf("<\n");
	if(strcmp(str1,str2)==0)
		printf("=\n");
	return 0;
}