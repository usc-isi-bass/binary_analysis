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
	char i,s1[80],s2[80];
	cin.getline(s1,81);
	cin.getline(s2,81);
	for(i=0;s1[i]!='\0';i++)
		if(s1[i]>=65 && s1[i]<=90)
			s1[i]+=32;
	for(i=0;s2[i]!='\0';i++)
		if(s2[i]>=65 && s2[i]<=90)
			s2[i]+=32;
	if(strcmp(s1,s2)>0)
		cout<<'>';
	if(strcmp(s1,s2)==0)
		cout<<'=';
	if(strcmp(s1,s2)<0)
		cout<<'<';
	return 0;


}
