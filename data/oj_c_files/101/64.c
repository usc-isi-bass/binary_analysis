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

//-------------------
//      ????
//       ???
//-------------------


int main()
{
	int a,b,c,i;                //??????????????,i??
	int words[3];             //words[]???????????
	char rank[4];              //rank[]??????????
	for(a=1;a<=3;a++)
	  for(b=1;b<=3;b++)
             {
	       if(a!=b)
		{
		   for(c=1;c<=3;c++)
                       {
		        if((a!=c)&&(b!=c))
			{
			     rank[a-1]='A';
		              rank[b-1]='B';
			     rank[c-1]='C';  
			     words[a-1]=(b>a)+(c==a);
			     words[b-1]=(a>b)+(a>c);
	                       words[c-1]=(c>b)+(b>a);
			     if(words[1]>words[2])    
			     if(words[0]>words[1])    //??????????
		     	     {
			    	for(i=0;i<=2;i++)
				    cout<<rank[i];
			     }}}}}
		return 0;
}

