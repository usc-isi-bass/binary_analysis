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
{int i,j,k;
char s[100],a[100],b[100],d[100];
        gets(s);gets(a);gets(b);
	for(j=0;;j+=(i+1))
	{for(i=0;s[i+j]!=' '&&s[i+j]!=0;i++)
		d[i]=s[i+j];
		d[i]='\0';
		if(strcmp(a,d)==0) 
          {if(s[i+j]==0) {printf("%s",b);break;}
		  else printf("%s ",b);}
		else if(s[i+j]==0) {printf("%s",d);break;}
            else printf("%s ",d);
	}
}	  