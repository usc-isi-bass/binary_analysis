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
{char str[50],substr[50],*p;
 int i,len;
 scanf("%s%s",substr,str);
 len=strlen(substr);
 p=str;
 while(*p!='\0')
	{int flag=1;
     for(i=0;i<len;i++)
		 if(*(p+i)!=substr[i])flag=0;
	 if(flag==1)break;
	 p++;
	}
 printf("%d",p-str);
}
