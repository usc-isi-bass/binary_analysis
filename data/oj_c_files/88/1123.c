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
  char str[50];
  cin.getline(str,40,'\n');
  int i,len;
  len=strlen(str);
  for(i=0;i<=len-1;i++)
  {
    if(str[i]>='0'  &&  str[i]<='9')
	{
		cout<<str[i];
	    if(i!=len-1)
		{
			if(str[i+1]<'0'  ||  str[i+1]>'9')
			cout<<endl;
		}
	}
  }

return 0;
}