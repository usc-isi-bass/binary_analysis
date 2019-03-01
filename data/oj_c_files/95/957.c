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

/*
 * c.cpp
 * ???1100012870;
 * ???????
 *  Created on: 2011-10-19
 *      Author: Li Wenpeng
 */
int main()
{
	char a[100],b[100];
	int i,s1;
	gets(a);
	gets(b);
	s1=strlen(a);                               //????????
    for(i=0;i<=s1;i++)
    {
    	if((a[i]>='a')&&(a[i]<='z')) a[i]=a[i]-32;    //???????
    	if((b[i]>='a')&&(b[i]<='z')) b[i]=b[i]-32;    //???????
    	if(a[i]-b[i]==0) continue;                    
    	else if (a[i]>b[i]) {cout<<'>'<<endl;return 0;}        //????????????????
    	else {cout<<'<'<<endl;return 0;}
    }
    cout<<'='<<endl;                             //?????????‘=’
    return 0;
}
