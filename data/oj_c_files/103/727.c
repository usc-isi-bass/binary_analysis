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

//??????(??)
struct yasuohou
{
	char letter;
	int count;

}yasuohou;
int main()
{
	char str[100];
	struct yasuohou lettercount[100];//struct???????????????????????????[]??????
	int i,j;//i???????j???????
	gets(str);
	//?????
	for (i=0;i<strlen(str);i++)
	{
		if (str[i]>=97&&str[i]<=122)
		{str[i]=str[i]-32;
		}
	}


	//??????????????????lettercount[i]
	i=0;j=0;
	lettercount[j].letter=str[i];
	lettercount[j].count=1;
	for (i=0;i<strlen(str);i++)
	{
		if (str[i+1]==str[i])//????????????lettercount[i]????lettercount[i].count++
		{
			lettercount[j].count++;
			
		}
		else if (str[i+1]!='\0'&&str[i+1]!=str[i])
		{
			lettercount[j].count++;//???lettercount[j].count??
			j++;//??????lettercount[j]
			lettercount[j].letter=str[i+1];//?????letter?str[i+1]?letter
			lettercount[j].count=1;
			
		}
		else if (str[i+1]=='\0')
		{   lettercount[j].count++;
		break;
		}
	}
	for (i=0;i<=j;i++)
	{printf("(%c%c%d)",lettercount[i].letter,',',(lettercount[i].count)-1);
	}

	return 0;
}
