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
	int z,q,s,l,cc[4],i;
	for(z=10;z<=50;z=z+10){
		for(q=10;q<=50;q=q+10){
			for(s=10;s<=50;s=s+10){
				for(l=10;l<=50;l=l+10){
					if(z!=q&&q!=s&&s!=l&&z!=s&&z!=l&&q!=l){
						cc[0]=(z+q==s+l);
						cc[1]=(z+l>s+q);
						cc[2]=(z+s<q);
						if(cc[0]+cc[1]+cc[2]==3){
							cout<<"l"<<" "<<l<<endl;
							cout<<"q"<<" "<<q<<endl;
							cout<<"z"<<" "<<z<<endl;
							cout<<"s"<<" "<<s<<endl;
						}
					}
				}
			}
		}
	}
	return 0;
}
