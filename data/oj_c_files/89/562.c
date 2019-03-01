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

//************************************************************************
//* ??? ????? .cpp                                               *
//* ?? ????                                                        *
//* ???? ?2010?11?26?                                            *
//************************************************************************
int main()
{
	int n,i,f=0,count[50000]={0},cel=-1;
	cin>>n;
    struct question
	{
		int love;
		int beloved;
	} ques[50000];
	for ( i=0 ; ; i++ )
	{
		cin>>ques[i].love>>ques[i].beloved;
		if ( ques[i].love==0&&ques[i].beloved==0 )
			break;
		count[ques[i].beloved]++;
		f++;
	}
	for ( i=0 ; i<n ; i++ )
	{
		if ( count[i]==n-1 )
		{
			cel=i;
			break;
		}
	}
    if (cel==-1)
    {
		cout<<"NOT FOUND"<<endl;
        return 0;
	}
	for ( i=0 ; i<f ; i++ )
	{
		if ( ques[i].love==cel )
			break;
	}
	if ( i==f )
		cout<<cel<<endl;
	else
		cout<<"NOT FOUND"<<endl;
	return 0;
}
