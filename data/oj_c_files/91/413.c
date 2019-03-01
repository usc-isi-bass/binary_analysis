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
	
	int i=0,j;
	char*p,str[1000],str1[1000];
	p=str;	

	gets(str);
	j=strlen(str);
	while(i<j-1){
	str1[i]=*(p+i)+*(p+i+1);	
	    i++;}
	str1[j-1]=*(p+j-1)+*p;
	for (i=0;i<j;i++)
		printf("%c",str1[i]);
	return 0;
}

