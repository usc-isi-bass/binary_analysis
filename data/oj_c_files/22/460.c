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

main()
{
	int i,n,a[300]={0},j,judge=0,k=0;
	char c;
	for(i=0;i<300;i++)
	{	scanf("%d",&a[i]);
	    c=getchar();
		if(c=='\n')break;}
	for(i=0;i<299&&a[i]!=0;i++)
	{	
		for(j=i+1;j<300;j++)if(a[i]<a[j]){k=a[j];a[j]=a[i];a[i]=k;judge=1;}
	}
	
	if(judge==1)
	
		for(i=1;i<300;i++)
		{if(a[i]!=a[i-1]){
		printf("%d",a[i]);
		break;}}
		else printf("No");

}
