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
	int i,n,f=0,m=0,j;
	
    
	struct 
	{
		char id[10];
		int age;
	} bingren[100],t[100],l[100],c;
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%s%d",&bingren[i].id,&bingren[i].age);
	}
	for(i=0;i<n;i++)
	{
		if(bingren[i].age>=60)
			t[f++]=bingren[i];
		else if(bingren[i].age<60)
		    l[m++]=bingren[i];
	}


	for(i=1;i<f;i++)
	{
		for(j=i;j>0;j--)
		{
		  if(t[j].age>t[j-1].age)
		  {
		  c=t[j];	  
		  t[j]=t[j-1];
		  t[j-1]=c;
		  }
		}
	}
	
	for(i=0;i<f;i++)
	{
		printf("%s\n",t[i].id);
	}

    for(i=0;i<m;i++)
	{
	    printf("%s\n",l[i].id);
	}
	return 0;
}


