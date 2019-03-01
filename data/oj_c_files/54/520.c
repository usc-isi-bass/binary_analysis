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

//?????????
//??????
//?????2010-11-23
//?????????? n ? k??????? m

 
int main()
{
	int n,k,apple=1,i=1,monkey=1;
	cin>>n>>k;
	while (true)
	{
		if (apple*n%(n-1)!=0){   //????????????????????? 
			i++;
			monkey=1;
			apple=i;
			continue;
		}
		apple=apple*n/(n-1)+k;  //?? 
		if (monkey==n) {
			cout<<apple;
			return 0;
		}
		monkey++;
	}
	return 0;
}