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
{
	char str[502],str1[502];
	int i,j,k,l,s,r,temp;
	gets(str);
	s=strlen(str);	
		for(k=1;k<=s-1;k++)
		{
			for(i=0;i<=s-k-1;i++)
			{   
			    if(i+k>s-1)
			    break;
				r=1;
		     for(j=i;j<=i+k;j++)
		    {
			str1[i+k-(j-i)]=str[j];
		    }
			for(j=i;j<=i+k;j++)
		    {
			if (str1[j]!=str[j])
			{
			r=0;
			break;
		    }
		    }
				if(r==1)
			{
			for(j=i;j<=i+k;j++)
			printf("%c",str[j]);
		    printf("\n");
		    }
		    
		    
		    
		    }
	   }
			
		
		
	

	
} 