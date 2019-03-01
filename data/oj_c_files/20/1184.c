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
{  char str[11],substr[4],st;
   while(scanf("%s",&str)!=EOF)
   {    scanf("%s",&substr);
        int i=0,k,t=0;
		k=strlen(str);st=str[0];
		for(i=0;i<k;i++)
			if(str[i]>st)
			{	st=str[i];
                t=i;
			}  
			for(i=0;i<t+1;i++)
				printf("%c",str[i]);
			printf("%s",substr);
	        for(i=t+1;i<k;i++)
				printf("%c",str[i]);

         printf("\n");
   }
}


