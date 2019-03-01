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
	char string[256],sub[256],replace[256],s[256],p[256];
	int i,j,k,a,k0,k1,k2,flag = 0;

	scanf("%s",string);
	scanf("%s",sub);
	scanf("%s",replace);
	k0 = strlen(string);
	k1 = strlen(sub);
	k2 = strlen(replace);
    for(i = 0;i < k0;i ++)
	{
	   for(j = i,k = 0;j < i + k1;j ++,k ++)
	   {
		   p[k] = string[j];
	   }
	   p[k] = 0;
	
	   if(strcmp(sub,p) == 0)
	   {
		   a = i;
		   for(i = 0;i < a;i ++)
		   {
			s[i] = string[i];
		   }
	       for(i = k0+k2-k1,j = k0;i >= a + k2,j >= a + k1;i --,j --)
		   {
            s[i] = string[j];
		   }
           for(i = a,j = 0;i < a + k2,j < k2;i ++,j ++)
		   {
		    s[i] = replace[j];
		   }
		   flag = 1;break;
	   }
	   }
	  if(flag == 1)
	  {
		  for(i = 0;i < k0 + k2 - k1;i ++)
	   {
	      printf("%c",s[i]);
	   }
	      printf("\n");
	  }
	  if(flag == 0)
		  puts(string);
	
}