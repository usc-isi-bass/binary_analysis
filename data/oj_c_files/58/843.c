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
	int n;
	cin>>n;
	char a[2];
	cin.getline(a,1);
	for(int j=1;j<=n;j++)
	{
		char *p,word[100];
        cin.getline(word,100);
        p=word;
        int w=0;
		if(*p=='_'||(*p>=65&&*p<=90)||(*p>=97&&*p<=122))
		{
			while(*p!='\0')
			{
				if(*p=='_'||(*p>=65&&*p<=90)||(*p>=97&&*p<=122)||(*p>=48&&*p<=57))p++;
				else {
					cout<<0<<endl;w=1;
					break;
				     }
			}
			if(w==0)cout<<1<<endl;
		}
		else cout<<0<<endl;
	}
	return 0;
}