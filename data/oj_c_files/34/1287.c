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

int main()//???
{
	int n;//????????
	cin>>n;//??n
	for (int k=0;k<2000;k++)
	{
		if (n==1)
		{cout<<"End";
		break;//?n=1,???End??????
		}
		else if(n%2)
		{int temp0=n;
		n=n*3+1;
		cout<<temp0<<"*3+1"<<"="<<n<<endl;//?n???????3n+1,??????
		}
		else 
		{int temp1=n;
		n=n/2;
		cout<<temp1<<"/2="<<n<<endl;//?n???????n/2???????
		}
	}
	return 0;
}    
