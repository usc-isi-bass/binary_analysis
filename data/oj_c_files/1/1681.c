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

int cc;//cc&#190;��&#199;�&#187;12?&#196;�&#214;&#189;a?&#196;�&#189;��&#214;&#214;�y
void fen(int x,int h); 
int main()
{
	int n=0,k=0;
	  cin>>n;
	  for(k=1;k<=n;k++)
	  {
			cc=0;
			int ff;
			cin>>ff; 
			fen(ff,2);
			cout<<cc<<endl;
	  }
	return 0;
} 
void fen(int x,int h)
{
	for(int i=2;i<=x;i++)
	  {
	        if((x%i==0)&&(i>=h)&&(i<x))
			    fen(x/i,i);
		    if((x%i==0)&&(i>=h)&&(i==x))
			    cc++;		
	  }
}