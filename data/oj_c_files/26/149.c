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
  char str[100],tru[100];
  int i,j,t,counter;
  cin.getline(str,100);
  for(i=0,t=0;str[i]!='\0';i++,t++)
  {
    if(str[i]!=' ')
		tru[t]=str[i];
	else
	{   counter=0;
	    if(str[i+1]!=' ')
		    tru[t]=str[i];
		else
		{ 
		    for(j=i;str[j]==' ';j++)
			  counter++;
			tru[t]=str[i];
			i=i+counter-1;
		}
	}
  }
  tru[t]='\0';
  cout<<tru;
}