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
    int i,j;
	char a[101],b[101],c[101];
	for(;;)
		{
			gets(a);
			
			if(strcmp(c,a)==0) break;
			for(i=0;a[i]!='\0';i++)
				{
					if(a[i]==')')  b[i]='?';
					else if(a[i]=='(') b[i]='$';
					else b[i]=' ';
			     }
			
			for(i=0;a[i]!='\0';i++)
			{
				if(b[i]=='?') 
				{
					for(j=i;j>=0;j--)
					{
					   if(b[j]=='$') 
						  { b[i]=' ';
					       b[j]=' ';
						   break;}
					
					}
				 }
              }
			for(i=0;a[i]!='\0';i++)
				printf("%c",a[i]);
			printf("\n");
			for(i=0;a[i]!='\0';i++)    
				printf("%c",b[i]);
	       printf("\n");
			strcpy(c,a);
	}
			
			return 0;
				

	     
	
	
	
	
	}
		








