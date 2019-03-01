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
	char a[100]={""},b[100]={""};
	int lena;
	int lenb;
	int i,j;
	int flag;

	scanf("%s%s",a,b);
	
	lena=strlen(a);
    lenb=strlen(b);

    if(lena==lenb)
	{
		for(i=0;i<lena;i++)
	    {
			flag=0;
			for(j=0;j<lenb;j++)
		    {
				if(a[i]==b[j])
				{
					a[i]='0';
				    b[j]='0';
					flag=1;
				    break;
			    }
		    }
			//if(flag==0)printf("NO\n");
	    }
		if(strcmp(a,b)==0)printf("YES\n");
		else printf("NO\n");
	}
	else printf("NO\n");
}