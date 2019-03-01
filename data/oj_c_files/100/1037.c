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

int main(){
char str[301],zimu[27]="abcdefghijklmnopqrstuvwxyz";
int i,k,len,num[27],sum=0;
scanf("%s",&str);
len=strlen(str);
for(i=0;i<27;i++)
{
	num[i]=0;
	for(k=0;k<len;k++)
	{
		if(zimu[i]==str[k])
		{
			num[i]++;
		}

	}

}
for(i=0;i<27;i++)
{
         sum+=num[i];
	if(num[i]>0)
	{
	printf("%c=%d\n",zimu[i],num[i]);
	}
}
if(sum==0)
{
printf("No");
}

return 0;
}
