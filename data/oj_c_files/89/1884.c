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
	int n,a,b,i,flg=1;                                   //flg??????????????????0?????1 
	int num[MAX];                                        //num???????????????? 
	scanf("%d",&n);
	for (i=0;i<n;i++)                                    //??????????0 
		num[i]=0;
	while (1)
		{scanf("%d %d",&a,&b);                          
		if (a==0 && b==0)                               //?0 0????????
			break;
		else
			num[b]=num[b]+1;
		}
	for (i=0;i<n;i++)
		if (num[i]==n-1)                              //??n-1????????????????? 
			{printf("%d",i);
			flg=0;
			break;}
	if (flg)
		printf("NOT FOUND");	
}