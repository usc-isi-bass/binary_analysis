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

/*�???�???????????????????????
????????????????????????????????????
?????????????????????????7????????
?????????????????????????????????28?
???7???????4??????????????????????
????????????????29??????????????????????*/
//Goofy 2010 11 10
int main()
{
	int n, i, k, Year, SumD=0, temp, Month1, Month2, Month[12]={31,28,31,30,31,30,31,31,30,31,30,31};//??????????
	cin>>n;
	for (i=0; i<n; i++)
	{
		cin>>Year>>Month1>>Month2;
		if ( Year%4==0 && Year%100!=0 || Year%400==0)//?????
			Month[1]=Run2;
		else//????
			Month[1]=Chang2;
		if ( Month2 < Month1 )
			temp=Month1, Month1=Month2, Month2=temp;//??????
		for ( k=Month1-1; k<Month2-1; k++)
			SumD += Month[k];//??
		if ( SumD % week == 0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		SumD=0;//?0
	}	
	return 0;
}