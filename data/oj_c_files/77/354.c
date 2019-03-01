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

/*        ????
??????     2010.12.29            */

int main()
{
	int i,len,j;
	int sta[10000]={0};//????????? 1boy 2girl 0??
	char lin[10000]={'\0'};//????
	char boy,girl;
	cin.getline(lin,sizeof(lin));
	len=strlen(lin);
	boy=lin[0];//?????
	girl=lin[len-1];//?????

	for(i=0;i<len;i++)
		sta[i]=lin[i]==boy?1:2;//??????
	for(i=0;i<len;i++)
		if(sta[i]==2)
			for(j=i-1;j>=0;j--)
				if(sta[j]==1)
				{
					cout<<j<<" "<<i<<endl;
					sta[i]=sta[j]=0;
					break;
				}
	return 0;
}