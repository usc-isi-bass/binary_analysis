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

// ??13.cpp : ??????????????
//



int main()
{
	char a[100];//={"10382942388594365769456845647694"};
	char shang[100];
	scanf("%s",a);
	int sh,yushu=a[0]-'0',i;
	//scanf("%s",a);
	if(((a[0]-'0')*10+(a[1]-'0'))<13&&a[2]=='\0')printf("0");
	if(a[1]=='\0')printf("0");
	for(i=1;a[i]!='\0';i++)
	{
		sh=(yushu*10+(a[i]-'0'))/13;
		yushu=(yushu*10+(a[i]-'0'))%13;
		shang[i-1]=sh;
		if(i!=1||sh!=0)printf("%d",sh);
	}
	//for(i=0;shang[i]!='\0';i++)
		//printf("%c",shang[i]);
	printf("\n%d",yushu);
	
}

