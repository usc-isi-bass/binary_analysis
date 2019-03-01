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
	int m,n,i,j,k,chush,yush,sush,weish,meiwei[10],geshu=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		for(chush=2,sush=1;chush<=i/2;chush++)
		{
			if(i%chush==0) sush=0;
		}
		if(sush==1)
		{
			weish=(int)log10(i)+1;
			for(k=i,j=0;j<weish;j++)
			{
				meiwei[j]=k%10;
				k=k/10;
			}
			for(k=0,j=0;j<weish;j++)
			{
				k=k+meiwei[weish-1-j]*(int)pow(10,j);
			}
			if(i==k) 
			{
				printf("%d",i);
				geshu++;
				break;
			}
		}
	}
	for(i++;i<=n;i++)
	{
		for(chush=2,sush=1;chush<=i/2;chush++)
		{
			if(i%chush==0) sush=0;
		}
		if(sush==1)
		{
			weish=(int)log10(i)+1;
			for(k=i,j=0;j<weish;j++)
			{
				meiwei[j]=k%10;
				k=k/10;
			}
			for(k=0,j=0;j<weish;j++)
			{
				k=k+meiwei[weish-1-j]*(int)pow(10,j);
			}
			if(i==k) 
			{
				printf(",%d",i);
				geshu++;
			}
		}
	}
	if(geshu==0) printf("no");
}