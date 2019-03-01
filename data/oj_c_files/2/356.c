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


struct book
{   int  num;
    char peo[26];
} book[999];

int main()
{   char zm,max;
	int n,i,k,num,cishu=-1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
                scanf("%d %s",&book[i].num,&book[i].peo);
	}
   for(zm='A';zm<='Z';zm++){
	  	 num=0;
	     	 for(i=0;i<n;i++){
		     for(k=0;k<26;k++){
		     if(book[i].peo[k]==zm)
			 num++;
			 }
		   }
		     if(num>cishu){
		     cishu=num;
		     max=zm;	 
		   }
		}
	printf("%c\n",max);
	printf("%d\n",cishu);
         for(i=0;i<n;i++){
            for(k=0;k<26;k++){
                   if(book[i].peo[k]==max)
           	   printf("%d\n",book[i].num);
		}
	}
	return 0;
}