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
	int a[6][6];
	int i,j;
	for (i=1;i<6;i++)
		for (j=1;j<6;j++)
			cin>>a[i][j];//????????????
	int big=0,small=1,line,row;
	for (i=1;i<6;i++)//???????
	{
		line=i;row=1;
		big=a[i][1];
		for (j=2;j<6;j++)
		{
			if (a[i][j]>big)
				{
				big=a[i][j];
				row=j;
				}//??????????
		}
		for (j=1;j<6;j++)
		{
			if (a[j][row]<big)
				break;//????? ????????????,??????
		}
		if (j==6)
			cout<<line<<" "<<row<<" "<<big<<endl;//??????????????
		else small++;//??????????
	}
	if (small==6)  cout<<"not found"<<endl;//??????????not found
	return 0;
}

