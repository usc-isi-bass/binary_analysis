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
	char shuzu[300],*tmp,*tmpa,*tmpt,*tmpc,*tmpg;
	int n,i,j,pp;
	scanf("%d",&n);
	for(i=0;i<n;i++){

		scanf("%s",shuzu);
		pp=strlen(shuzu);
		for(j=0;j<pp;j++){
			        if(shuzu[j]=='A')  shuzu[j]='T';

			        else if(shuzu[j]=='T')  shuzu[j]='A';
			   	    else if(shuzu[j]=='C')  shuzu[j]='G';
					else if(shuzu[j]=='G')  shuzu[j]='C';
		}
		printf("%s\n",shuzu);
	}
	return 0;
}
