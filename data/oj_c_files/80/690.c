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
	int sy,sm,sd,ey,em,ed;
	int sum=0; 

	int k,f; //????????
	int m,d,a=0,b=0; //?????????

	int mon[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,};
	int year[2]={365,366};
	
	cin>>sy>>sm>>sd>>ey>>em>>ed;
	
	for (;sy<ey-1;sy++)
	{
		if (sm>2) k=( ( (sy+1) % 4 == 0 && (sy+1) % 100 != 0) || ((sy+1) % 400 == 0));
	    else k=( (sy % 4 == 0 && sy % 100 != 0) || (sy % 400 == 0));
        sum= sum+ year[k];
	} //??2008?2009???
	
	k= ((sy % 4 == 0 && sy % 100 != 0) || (sy % 400 == 0)); //??2008????
	
	if (sy<ey && (em>sm || (em==sm && ed>=sd))) //????2008 1 1 ?2009 2 1
	{
		sum= sum+year[k];
		sy++; //??2009 1 1?2009 2 1   //???2008 3 1?2009 1 1
	}
	
	k=( (sy % 4 == 0 && sy % 100 != 0) || (sy % 400 == 0) ); //??2009(2008)????
	f=( (ey % 4 == 0 && ey % 100 != 0) || (ey % 400 == 0) ); //??2009????
		
	d=sd;//??1 1 ?3 1 ??1 1???a
	for (m= sm; m>0; m--)
	{	
		for (; d>0; d--)
			a++;
		d= mon[k][m-2];
			
	}

	d=ed; //??2 1 ?1 1???b
	for (m= em;m>0;m--)
	{	
		for (; d>0; d--)
			b++;
		d= mon[f][m-2];
	}

	if (sy==ey ) sum= sum + b - a ; //2009 1 1?2009 2 1?b-a
	else sum= sum-a + year[k] +b; // 2008 3 1? 2009 1 1

	cout<<sum;

	return 0;
}
