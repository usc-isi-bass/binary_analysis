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
	int odd(int x);int even(int y);//????
	int n;
	cin>>n;
	while(n!=1)
	{if(n%2==0)
	   {n=even(n);}//??????
	else
	   {n=odd(n);}//??????
	}
	cout<<"End";
	return 0;

}

int odd(int x)//????
{ int y;
  y=3*x+1;
  cout<<x<<"*3+1="<<y<<endl;
  return y;
}

int even(int x)//????
{ int y;
  y=x/2;
  cout<<x<<"/2="<<y<<endl;
  return y;
}