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
	char a[100]={0},b[100]={0},*p,*q,*k;
	int out;
	scanf("%s",a);
	scanf("%s",b);
	/*puts(a);puts(b);
	for (i=0;b[i]!='\0';i++)
	{
		for (j=i,k=0;;k++,j++)
                {
	              if(!(a[k]!='\0'&&a[k]==b[j]))
                      break;
                }
                if(a[k]=='\0')
	        {
		     out=i+1;
		     break;
		}
			
	}*/
	for (p=b;*p!='\0';p++)
	{
		for (k=p,q=a;;k++,q++)
		{
            if(!(*q!='\0'&&*k==*q))
				break;
		}
		if (*q=='\0')
		{
			out=p-b;
			break;
		}
	}
	printf("%d",out);

}
