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
	int n=0,line=80;
	cin>>n;
	getchar();
	while(n>0)
	{
		int changdu=1;
		char a[50]={'\0'};
		char *p=NULL;
		p=a;
		char d='\n';
		while(d=='\n')d=getchar();		
		*p=d;
		while(true)
		{
			d=getchar();
			if(d==' '||d=='\n')break;
			changdu++;
			p++;
			*p=d;			
		}
		p=a;
		int i;
		//for(i=1;i<=changdu;i++){cout<<*p;p++;}
		//cout<<endl<<changdu<<endl;

		if(changdu<line)
		{
			if(line!=80){cout<<" ";line--;}
			for(i=1;i<=changdu;i++){cout<<*p;p++;}
			line=line-changdu;
			if(line==0)
			{
				cout<<endl;
				line=80;
			}			
			
		}
		else
		{
			cout<<endl;
			for(i=1;i<=changdu;i++){cout<<*p;p++;}
			line=80-changdu;

		}
		

	n--;	
	}
	
	
	return 0;
}