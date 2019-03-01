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
	char ch[101];
	cin.getline(ch,101);
	char b = ch[0];
	char g = ch[0];
	for (int i=0;g==b;i++)
		g = ch[i];
	int length = strlen(ch);
	int gnum = 0;
	for (int i=0;i<(length/2);i++)
	{
		for (gnum++;ch[gnum]==b;gnum++) ;
		int k=1;
		int j;
		for (j=gnum-1;k>0;j--)
		{
			if (ch[j]==b) k--;
			else k++;
		}
		cout<<j+1<<" "<<gnum<<endl;
	}
	return 0;
}
