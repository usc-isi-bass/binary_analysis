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
{   char c;
    int check=0,i=0,m,flag=0;
	while((c=getchar())!='\n'){
		
		if(c!=' ') {i++;flag=1;m=i;}
		else  if(flag==1) { flag=0;
			if(check==0)
		   {printf("%d",i);check=1;}
	       else printf(",%d",i);
	       i=0;
	   }
    
	 }
   if(flag==1&&check==1)
	printf(",%d",m);
 //????????????????????
	//??????????????????check
	//???????????check==0??????????
	if(flag==1&&check==0)
		printf("%d",m);
  

	return 0;

}