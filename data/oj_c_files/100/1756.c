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
	char a[305],ch;
	static int t[305];
	int i,j,l,count=0,y=0;
	gets(a);
	l=strlen(a);
	i=0;j=0;
	while(a[i]!='\0')
	{
		if(a[i]<65||(a[i]>90&&a[i]<97)||a[i]>122) 
			count++;
		else t[a[i]]++;
		i++;
	}
	if(count==l) printf("No\n");
	else {
		for(i=0;i<123;i++)
		{
		    if(t[i]!=0)  printf("%c=%d\n",i,t[i]);	
		}
		
		}
	
}