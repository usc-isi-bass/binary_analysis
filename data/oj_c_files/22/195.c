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

int rec[1000];
int n;
int i,res,max;
char ch;
main()
{
	n=1;
	while(1)
	{
		scanf("%c",&ch);
		if (ch==',') {n++; continue;}
		if (ch=='\n') break;
		rec[n]=rec[n]*10+ch-'0';
	}
	max=0;
	for(i=1;i<=n;i++) if (rec[i]>max) max=rec[i];
	res=0;
	for(i=1;i<=n;i++) if ((rec[i]>res)&&(rec[i]<max)) res=rec[i];
	if ((res==0)||(res==max)) printf("No");
	else printf("%d\n",res);
}