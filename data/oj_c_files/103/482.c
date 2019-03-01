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
	char str[1010];int i;
	cin.getline(str,1010);
	for(i=0;str[i]!='\0';i++)
		if(str[i]>='a'&&str[i]<='z')
			str[i]=str[i]-32;
		for(i=0;str[i]!='\0';i++)
		{
		   char t=str[i];int count=1;
			while(str[i+1]==t)
			{i=i+1;count++;}
           cout<<'('<<t<<','<<count<<')';
		   
		}
		return 0;
 
  
}
