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
	char s1[101],s2[101];
	int a,b,i;
 cin.getline(s1,100);
 cin.getline(s2,100);
 a=strlen(s1);b=strlen(s2);
 for (i=0;i<a;i++)
		{
			if (s1[i]>96) s1[i]-=32;
   if (s2[i]>96) s2[i]-=32;
	 }
		for (i=0;i<a;i++)
		{
			if (s1[i]>s2[i]) {cout<<'>';return 0;}
			if (s1[i]<s2[i]) {cout<<'<';return 0;}
		}
		cout<<'=';
	return 0;
}
