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

//?????C????????
//??????
//??????????C????????

int main()
{
    int n,hefa[100]={0};                     //n????????hefa???????????
	cin>>n;                                  //??n
	cin.get();                               //????????
	for (int i=0;i<n;i++)                    //i?????
	{
		char ch[81]={'\0'};                  //?????????
		int lench;                           //???????
		cin.getline(ch,81,'\n');             //?????
		for(lench=0;lench<81;lench++)
			if (ch[lench]=='\0') break; //???????
		
		if ((ch[0]!='_') && (ch[0]>'Z'||ch[0]<'A') && (ch[0]>'z'||ch[0]<'a'))
			hefa[i]=1;                       //?????????????hefa[i]?1
		else if(lench>1)                     //??????????????1
			for(int j=1;j<lench;j++)         //j?????
				if ((ch[j]!='_') && (ch[j]>'Z'||ch[j]<'A') && (ch[j]>'z'||ch[j]<'a') && (ch[j]>'9'||ch[j]<'0'))
				{
					hefa[i]=1;
					break;
				}                            //??ch[j]???????????hefa[i]?1??????
				else;
		else;		                         //???????????1??hefa[i]??????0
	}
	for (int k=0;k<n;k++)
		if(hefa[k]==0) cout<<1<<endl;        //hefa[k]?0???????????1
		else cout<<0<<endl;                  //hefa[k]?1????????????0
		return 0;
}
