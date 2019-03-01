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

void main()
{char a[300];
	int num[300]={0};
	int i,j,d=0,s=0,t,x,y=0;
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{ if((a[i]>='0'&&a[i]<='9')&&(a[i+1]>='0'&&a[i+1]<='9'))
	  d=d*10+a[i]-'0';
	  else if((a[i]>='0'&&a[i]<='9')&&(a[i+1]<'0'||a[i+1]>'9'))
      {d=d*10+a[i]-'0';
	  num[s]=d;
	  s=s+1;
	  d=0;}
	}
	s=s-1;
	
	for(j=0;j<s;j++)
			for(i=0;i<s-j;i++)
			if(num[i]<num[i+1])
			{
				t=num[i];
				num[i]=num[i+1];
				num[i+1]=t;}
        for(i=0;i<=s-1;i++)
		
		for(j=1;j<=s;j++)
			if(num[j]!=num[0])
			{ x=j;  y=1;   break;}
			if(y==1)  printf("%d",num[x]);
			if(y==0)  printf("No");  

}



