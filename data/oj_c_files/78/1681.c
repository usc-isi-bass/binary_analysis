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
 *  ???????
 *   ????? 2010-11-20
 *    ??????
 *    ??????????????????????????;
 *     ???????????????????????????????????????????
 */


int main(){
	int a[4];
	char b[4];
	for(int z=1;z<=5;z++)
		for(int q=1;q<=5;q++)
			for(int s=1;s<=5;s++)
				for(int l=1;l<=5;l++){//1?2?3?4?5??????????
					if((z!=q)&&(z!=s)&&(z!=l)&&(q!=s)&&(q!=l)&&(s!=l))

						if(((z+q)==(s+l))&&((z+l)>(s+q))&&((z+s)<q))
						{a[0]=z;a[1]=q;a[2]=s;a[3]=l;
						b[0]='z';b[1]='q';b[2]='s';b[3]='l';
						for(int i=0;i<4;i++)
							for(int j=0;j<i;j++)
								if(a[i]>a[j])
								{int temp;
								temp=a[j];
								a[j]=a[i];
								a[i]=temp;
								char t;
								t=b[j];
								b[j]=b[i];
								b[i]=t;
								}
						cout<<b[0]<<" "<<a[0]*10<<endl;
				        cout<<b[1]<<" "<<a[1]*10<<endl;
						cout<<b[2]<<" "<<a[2]*10<<endl;
						cout<<b[3]<<" "<<a[3]*10<<endl;
                       		}
				}

	return 0;
}