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


char str[1000];
int main()
{
	cin>>str;
	int len=strlen(str);
	for(int i=0;i<len;i++)
		if(str[i]>='a'&&str[i]<='z')
			str[i]=(char)(str[i]+'A'-'a');
	char als;
	als=str[0];
	int aln=0;
	for(int i=0;i<len;i++)
	{
			if(str[i]==als)
				aln++;
			else
			{
				cout<<"("<<als<<","<<aln<<")";
				als=str[i];
				aln=1;
			}
	}
	cout<<"("<<als<<","<<aln<<")"<<endl;
	return 0;
}
