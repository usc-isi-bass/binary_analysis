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

void main ()
{
	int a[300]={0},i,p,k=0,m,b;
	char c[1200];
    gets(c);
	for(i=0;c[i]!='\0';i++)
	{}
	c[i+1]=',';
	
	for(i=0;c[i]!=0;i++)
	{
		if(c[i]>='0'&&c[i]<='9')
	    a[k]=a[k]*10+c[i]-'0';
		
        if(c[i]==',')
		k++;
	}
	p=k;
    
    

    
	m=a[0];
	for(k=0;k<=p;k++)
			if(a[k]>m)
				m=a[k];
	for(k=0;k<=p;k++)
		if(a[k]==m)
			a[k]=0;
	
	



	b=a[0];
	for(k=0;k<=p;k++)
		if(a[k]>b)
			b=a[k];
	if(b<m&&b>0)
		printf("%d",b);
	if(b==m||b==0)
		printf("No");
		
	

}

      


	
    
		
