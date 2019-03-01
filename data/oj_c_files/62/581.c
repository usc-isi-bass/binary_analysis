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
{char *s;
int i,j,flag;
s=(char*)malloc(100000*sizeof(char));
gets(s);
for(i=0;*(s+i)!='\0';i++)
{if(*(s+i)==' ')  
   { if(flag==0) {for(j=i;*(s+j)!='\0';j++) *(s+j)=*(s+j+1);i--;} flag=0;}
 else flag=1;
}
puts(s);
	
	}
