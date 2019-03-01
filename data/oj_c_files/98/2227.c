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
	int n,i,letters=0,space=0;
	char (*word)[41];
	scanf("%d",&n);
	word=(char *)malloc((n+1)*41*sizeof(char));
	for(i=0;i<n;i++)
	{
		scanf("%s",word+i);
	}
	for(i=0;i<n;i++)
	{
		letters+=(strlen(word+i));
		if(letters>80)
		{
			letters=strlen(word+i);
			printf("\n%s",word+i);
		}else if(letters==80){
			letters=0;
			printf(" %s\n",word+i);
			space=0;
			letters--;
		}else if(space==0){
			printf("%s",word+i);
			space++;
		}else{
			printf(" %s",word+i);
		}
		letters++;
	}
	return 0;
}