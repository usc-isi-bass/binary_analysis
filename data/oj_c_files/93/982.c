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

//******************************************
// ??????3?5?7????             *
// ???1200012826 ??                   *
// ???2012?9?30?                     *
//******************************************
int main()                                 // ?????
{
	int N, x=3, y=5, z=7;                  // ????N?x=3?y=5?z=7
	char n='n';                            // ?????n
	cin>>N;                                // ??N
	if(N%3==0)                             // ??????
	{if(N%5==0&&N%7==0)
		{cout<<x<<' '<<y<<' '<<z<<endl;
		}                                  // N???3?5?7?????3 5 7 
	else if(N%5==0&&N%7!=0)
		{cout<<x<<' '<<y<<endl;
		}                                  // N??3?5?????3 5
	else if(N%5!=0&&N%7==0)
		{cout<<x<<' '<<z<<endl;
		}                                  // N??3?7?????3 7
	else
		{cout<<x<<endl;
		}                                  // N???3?????3
	}
	else if(N%5==0&&N%7==0)
		{cout<<y<<' '<<z<<endl;
		}                                  // N???5?7?????5 7                
	else if(N%5==0&&N%7!=0)
		{cout<<y<<endl;
		}                                  // N???5?????5
	else if(N%5!=0&&N%7==0)
		{cout<<z<<endl;
		}                                  // N???7?????7
	else
		{cout<<n<<endl;
		}                                  // N???3?5?7????????n
	return 0;
}      