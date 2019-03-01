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
	char zxc[230],cxz[230];
	int i,j;
	int n,len;
	gets(zxc);
	for(j=0;zxc[j]!='\0';j++)
	{
		if(zxc[j]==' ')
		{
			if(zxc[j-1]==' ')
			{
				for(i=j;zxc[i]!='\0';i++)
				{
					zxc[i]=zxc[i+1];
				}
				j--;
			}
		}
	}
	puts(zxc);
	return 0;
}
