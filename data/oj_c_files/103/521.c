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
	char ch[100];
	int i,j,count=0,m;
	cin>>ch;
	for(i=0;i<strlen(ch);i++)
		if(ch[i]>='a'&&ch[i]<='z')
			ch[i]=ch[i]-32;
		j=0;
	
		while(1)
		{	m='A';
		for(i=m;i<='Z';i++)
		{
			if(i==ch[j])
			{
				while(i==ch[j])
				{
				count++;
				j++;
				}
			   cout<<'('<<(char)i<<','<<count<<')';
			   count=0;
			   m='A';
			}
		}
		if(j==strlen(ch))
			break;
		}
		return 0;
}
			
