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

int main(int argc, char* argv[])
{
	struct grades{
		int id;
		int yuwen,shuxue;
		int zongfen ;
	}grades[100007];
	int i,n,j,t,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&grades[i].id,&grades[i].yuwen,&grades[i].shuxue);
	
		grades[i].zongfen=grades[i].yuwen+grades[i].shuxue;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(grades[j].zongfen>=grades[j+1].zongfen)
			{
				t=grades[j].zongfen;
				grades[j].zongfen=grades[j+1].zongfen;
				grades[j+1].zongfen=t;
				s=grades[j].id;
				grades[j].id=grades[j+1].id;
				grades[j+1].id=s;
			}
		}
	}
	for(i=n-1;i>=n-3;i--)
	{
		printf("%d %d\n",grades[i].id,grades[i].zongfen);
	}

	return 0;
}