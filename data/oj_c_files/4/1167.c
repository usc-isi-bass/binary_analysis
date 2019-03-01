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
{int a[103][103];

	int row,col;
	int i,j;
	cin>>row>>col;
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)cin>>*(a[i]+j);
for(i=0;i<row+col-1;i++)
	for(j=0;j<=i;j++)if(j<row&&i-j<col)cout<<*(a[j]+i-j)<<endl;

return 0;
}
