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
	int m;
	char sex[10];
	char fmale[10]="male";
	float a;
	int male=0;
	int famle=0;
	float humanm[40];
	float humanf[40];

	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>sex>>a;
		if(strcmp(sex,fmale)==0)
		{	
			
			humanm[male]=a;
			male++;
		}
		else
		{
			
			humanf[famle]=a;
			famle++;
		}
	}
	sort(&humanm[0],&humanm[male]);
	sort(&humanf[0],&humanf[famle]);
	for(int i=0;i<male;i++)
		printf("%.2f ",humanm[i]);
	for(int i=famle-1;i>0;i--)
		printf("%.2f ",humanf[i]);
	printf("%.2f\n",humanf[0]);
}