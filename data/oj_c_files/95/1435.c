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


char a[100000],b[100000];

int main()
{
	cin.getline(a,10000);
	cin.getline(b,10000);
	for(int x=0;x<min(strlen(a),strlen(b));x++)
	{
		if(a[x]<='z' && a[x]>='a')
		{
			a[x]-='a'-'A';
		
		}
		if(b[x]<='z' && b[x]>='a')
		{
			b[x]-='a'-'A';
		} 
		if(a[x]>b[x]) {cout<<">";return 0;}
		if(a[x]<b[x]) {cout<<"<";return 0;}	
	}
	if(strlen(a)==strlen(b)) {cout<<"=";return 0;}
    if(strlen(a)>strlen(b)) {cout<<">";return 0;}
	else {cout<<"<";return 0;}	
	return 0;
	
}