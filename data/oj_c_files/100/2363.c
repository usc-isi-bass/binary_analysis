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
	int k[52]={0},i,j,n,m,h=0;
	char a[300];
	scanf("%s",a);
	n=strlen(a);
	for(j=0;j<26;j++)
	{
		m=0;
		for(i=0;i<n;i++)
		{
			if(a[i]=='A'+j)
			{	m++;
			h++;}
		}
		
		if(m>0)
			printf("%c=%d\n",'A'+j,m);
	}
      for(j=0;j<26;j++)
	{  
		m=0;
		for(i=0;i<n;i++)
		{
			if(a[i]=='a'+j)
				{	m++;
			h++;}
		}
		if(m>0)
			printf("%c=%d\n",'a'+j,m);
	}
	  if(h==0)
		  printf("No");
}
        