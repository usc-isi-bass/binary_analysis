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


struct stu 
{ 
	int num; 
	int ch; 
	int math; 
	int total; 
} a[100000];
struct str 
{ 
	int num; 
	int total; 
} b[100000];

main()
{
	int i,n,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%d %d %d\n",&a[i].num,&a[i].ch,&a[i].math);
	b[i].num=a[i].num;
	b[i].total=a[i].ch+a[i].math;}
	for(i=0; i<3; i++)
	{		
		for(j=i+1;j<n;j++)
		if (b[i].total<b[j].total)		
		{			
			b[n]=b[i];			
			b[i]=b[j];			
			b[j]=b[n];		
		}	
	}
	for(i=0;i<3;i++)
	printf("%d %d\n",b[i].num,b[i].total);
}

