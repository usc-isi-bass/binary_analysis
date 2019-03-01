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
  char str[31];
  cin.getline(str,31);
  for(int i=0;str[i];i++)
  {
	  if((str[i]<='9'&&str[i]>='0')&&(str[i+1]<='9'&&str[i+1]>='0'))
		  cout<<str[i];
	  if((str[i]<='9'&&str[i]>='0')&&!(str[i+1]<='9'&&str[i+1]>='0'))
		  cout<<str[i]<<endl;
  }
  return 0;

}
