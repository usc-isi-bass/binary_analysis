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
{int a[5][5];
int max,i,j,bo=1,get=0,k,r;
for(i=0;i<5;i++)
	for(j=0;j<5;j++)
		cin>>a[i][j];
for(i=0;i<5;i++){
	max=a[i][0];
	r=0;
	bo=1,get=0;
	for(j=1;j<5;j++)
		if(a[i][j]>max)
            {max=a[i][j];
            r=j;
            }

	for(k=0;k<5;k++)
		if(a[k][r]<max)
			bo=0;
	if(bo)
	{
		cout<<i+1<<" "<<r+1<<" "<<max<<endl;/*??????????????????????????????????*/
		get=1;
		break;
	}
         }
	if(!get)
		cout<<"not found"<<endl;/*?????????????????????????????"not found"*/
return 0;
}