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

//***************
//????3.cpp *
//?  ?????*
//***************
int main()
{
	char s[101],a[101],b[101];//?????s,a,b
	char m[101],n[101];
	int ls=0,la=0,lb=0;//??ls,la,lb???????s,a,b???
	int i,j,k;
	cin.getline(s,101);
	cin.getline(a,101);
	cin.getline(b,101);//????s,a,b
	ls=strlen(s);
	la=strlen(a);
	lb=strlen(b);//????s,a,b???
	for (i=0;i<ls;i++)
	{
		if(s[i]!=a[0])continue;
		for(j=i+1;j<i+la;j++)
		{
			if(i!=0&&s[i-1]!=' ')
				break;
			if(s[j]!=a[j-i])
				break;
		}//??s?????a???????
		if (j==i+la)//??j?i+la-1?????????"break"???
		{
			for(k=0;k<i;k++)
				m[k]=s[k];
			m[i]='\0';
			strcpy(n,strcat(m,b));
			strcpy(s,strcat(n,s+(i+la)));//?????????s??????b?s?????????
			i=i+lb;
		}
	}
	cout<<s;
	return 0;
}