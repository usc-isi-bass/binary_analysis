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

/*
 * 01.cpp
 *
 *  Created on: 2011-11-6
 *      Author: 1100012797
 */
int main()
{
	int n,a100,k,a50,a20,a10,a5,a1;
	cin>>n;
	a100=(n-n%100)/100; 
	k=n-a100*100;
	a50=(k-k%50)/50;
	k=k-a50*50;
	a20=(k-k%20)/20;
	k=k-a20*20;
	a10=(k-k%10)/10;
	k=k-a10*10;
	a5=(k-k%5)/5;
	k=k-a5*5;
	a1=k;
	cout<<a100<<endl<<a50<<endl<<a20<<endl<<a10<<endl<<a5<<endl<<a1;
	return 0;
}
