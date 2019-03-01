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
	
	char *p,*ip,*p3,str[20],substr[4],max;
	int i;
	while(scanf("%s%s",str,substr)!=EOF)
	{   
		for(max=*str,ip=str,p=str;*p!='\0';p++)
		{
		if(*p>max){max=*p;ip=p;}
		}
		ip=ip+1;
		
		for(p=str+strlen(str);p>=ip;p--)
			*(p+3)=*p;
	
		for(p3=substr,i=0;i<3;i++,p3++,ip++)
			*ip=*p3;
		printf("%s\n",str);
		strcpy(str,"");
	}
}
