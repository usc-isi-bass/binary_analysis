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

/*??
????row?col??????array????array[0][0]?????????????????????????


????
????????????????row?col?
???row??????col???????????????
??????row?col??0<row<100, 0<col<100?

????
????????????????????

*/
int main()
{
	int ain[123][123];
	int row,col;cin>>row>>col;
	for(int i=0; i<row; ++i)
		for(int j=0; j<col; ++j)
			cin>>ain[i][j];
	int *p[123];
	for(int i=0; i<row; ++i)p[i]=ain[i];
	for(int i=0; i<row+col-1; ++i)
	{
		for(int j=0; j<row; ++j )
		{
			if(j<=i&&j>i-col)cout<<*(p[j]++)<<endl;
		}
	}
	return 0;
}
