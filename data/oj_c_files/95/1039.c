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
 * 111028_03.cpp
 *
 *  Created on: 2011-10-28
 *      Author: Alfalfa
 */
int main ()
{
	char a[81],b[81];
	int i,lenA,lenB;
	cin.getline((a),81);
	cin.getline((b),81);
	lenA=strlen(a);
	lenB=strlen(b);
	for(i=0;i<lenA;i++)
		if(a[i]<97) a[i]=a[i]+32; //?????
	for(i=0;i<lenB;i++)
		if(b[i]<97) b[i]=b[i]+32;
	if(strcmp(a,b)==1) cout<<">";
		else if(strcmp(a,b)==-1) cout<<"<";
		else cout<<"=";
	return 0;

}
