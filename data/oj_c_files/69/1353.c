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


main()
{
	char num1[MAX],num2[MAX];                                 
	int l1,l2,l,i,j,num[MAX],flg=1;                        //l????????????num????????????flg????????0?? 
	gets(num1);
	gets(num2);
	l1=strlen(num1);
	l2=strlen(num2);
	
	if (l1>l2)
		l=l1;
	else 
		l=l2;
	
	if (l1>l2)                                             //???????????????????num????????????????num??? 
	{
		j=l1-1;
		for (i=l2-1;i>=0;i--)
			{num[j]=num1[j]+num2[i]-'0'-'0';
			j--;}
		for (;j>=0;j--)
			num[j]=num1[j]-'0';
	}

	else
	{
		j=l2-1;
		for (i=l1-1;i>=0;i--)
			{num[j]=num2[j]+num1[i]-'0'-'0';
			j--;}
		for (;j>=0;j--)
			num[j]=num2[j]-'0';
	}


	for (i=l-1;i>0;i--)                                   //???????????10????????10?????1 
		{if (num[i]>=10)
				{num[i-1]++;
				num[i]=num[i]-10;}
		}

	if (num[0]>=10)                                       //??????????10?????? 
		{
			num[0]=num[0]-10;
			printf("1");
			flg=0;                                       //??flg=1????????0?? 
			}
	if (flg)                                             //?num???????????0??? 
		for (i=0;i<=l-1;i++)
			if (num[i]!=0)
				break;
	if (i<=l-1)                                           //????0?????????0????? 
	{
		for (;i<=l-1;i++)
			printf("%d",num[i]);}
	else printf("0");                                      //???0??????0 
	
	
}