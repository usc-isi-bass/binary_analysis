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
	char a[100];int i=0;int j=0;
	char b[100];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	scanf("%s",a);
	scanf("%s",b);

	int l1=strlen(b);int l2=strlen(a);
	for(i=0;i<l1;i++)
	{
		if(a[0]==b[i])
		{   
			j=0;
			while(j<l2)
			{
				if(a[0+j]!=b[i+j])
				break;
			    else
				j++;}
			
         if(j==l2)
		 {printf("%d",i);
		 break;}}}
}
