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

void function(int len,int rem);
int main()
{
	int len,rem;
	cin>>len;
	rem=len;
	function(len,rem);
	
	return 0;
}

void function(int len,int rem)
{ int num;
  if(len>0){
  cin>>num;
  function(len-1,rem);
     if(len==rem)cout<<num;
	 else cout<<num<<" ";
  }
}
