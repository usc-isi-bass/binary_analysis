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

//***************************************************************************************
//??:????????????????                                                 *
//?????10.20                                                                       *
//????wayne                                                                         *
//***************************************************************************************
int main()
{
	int n,i,a[13];
	cin>>n;
	a[1]=12+n,a[2]=a[1]+31,a[3]=a[2]+28;          
	a[4]=a[3]+31,a[5]=a[4]+30,a[6]=a[5]+31;
	a[7]=a[6]+30,a[8]=a[7]+31,a[9]=a[8]+31;
	a[10]=a[9]+30,a[11]=a[10]+31,a[12]=a[11]+30;    //????????13??1.1???         
	for (i=1;i<=12;i++)                             //????????????
		if (a[i]%7==5)  cout<<i<<endl;              //???????   
	return 0;
}