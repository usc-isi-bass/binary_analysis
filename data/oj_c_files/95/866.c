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

void main()
{
	char str1[100],str2[100];
	int i,k=0;
	gets(str1);
	gets(str2);

	for(i=0;str1[i]!='\0';i++)
		str1[i]=(str1[i]>='A'&&str1[i]<='Z')?(str1[i]+32):str1[i];/*?????????????[i]…………*/
	for(i=0;str1[i]!='\0';i++)
		str2[i]=(str2[i]>='A'&&str2[i]<='Z')?(str2[i]+32):str2[i];
	
	
	for(i=0;str1[i]!='\0';i++){
		if(str1[i]>str2[i])   {printf(">");k=1;break;}
		else if(str1[i]<str2[i])   {printf("<");k=1;break;}
	}

	if(k==0)
	printf("=");
}