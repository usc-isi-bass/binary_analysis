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


//?????????
void change(char * a)
{
	int l=strlen(a);
	int i;
	for(i=0;i<l;i++)
	{
		if((a[i]>='a')&&(a[i]<='z'))
		{
			a[i]=a[i]-'a'+'A';
		}
	}
	return;
}

int main()
{
	int temp_num;
	int l;
	int i;
	char temp_char;
	char st[1024];   //?????????????????“????”
	scanf("%s",st);
	change(st);
	//printf("%s",st);  //debug
	l=strlen(st);
	temp_num=1;
	temp_char=st[0];
	for(i=1;i<=l;i++)  //?<???????????
	{
		if(st[i]==temp_char)
			temp_num++;
		else
		{
			printf("(%c,%d)",temp_char,temp_num);
			temp_char=st[i];
			temp_num=1;
		}
	}
	return 0;
}