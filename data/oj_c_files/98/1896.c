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
	char word[1000][83];
	int n,i,counter=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>word[i];
        char *p,*temp;
	for(i=0;i<n;i++)
	{
                temp=word[i];
		if(counter==0)
		{
                        for(p=temp;p<temp+strlen(word[i]);p++)
                             cout<<*p;
			counter=counter+strlen(word[i]);
		}
		else
		{
			if(counter+strlen(word[i])+1<=80)
			{
				cout<<" ";
                                for(p=temp;p<temp+strlen(word[i]);p++)
                                      cout<<*p;
				counter=counter+strlen(word[i])+1;
			}
			else
			{
				cout<<endl;
				counter=0;
				i--;
			}
		}
	}
	return 0;
}