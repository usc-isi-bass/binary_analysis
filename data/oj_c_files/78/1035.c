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
	int z,q,s,l;
	for(z=1;z<=5;z++)
		for(q=1;q<=5;q++)
			if(q!=z)
				for(s=1;s<=5;s++)
					if(s!=z&&s!=q)
						for(l=1;l<=5;l++)
							if(l!=z&&l!=q&&l!=s)
								if(((z+q)==(s+l))&&((z+l)>(q+s))&&((z+s)<q))
								{
									if(z==5)cout<<"z 50"<<endl;
									else if(q==5)cout<<"q 50"<<endl;
									else if(s==5)cout<<"s 50"<<endl;
									else if(l==5)cout<<"l 50"<<endl;
									if(z==4)cout<<"z 40"<<endl;
									else if(q==4)cout<<"q 40"<<endl;
									else if(s==4)cout<<"s 40"<<endl;
									else if(l==4)cout<<"l 40"<<endl;
									if(z==3)cout<<"z 30"<<endl;
									else if(q==3)cout<<"q 30"<<endl;
									else if(s==3)cout<<"s 30"<<endl;
									else if(l==3)cout<<"l 30"<<endl;
									if(z==2)cout<<"z 20"<<endl;
									else if(q==2)cout<<"q 20"<<endl;
									else if(s==2)cout<<"s 20"<<endl;
									else if(l==2)cout<<"l 20"<<endl;
									if(z==1)cout<<"z 10"<<endl;
									else if(q==1)cout<<"q 10"<<endl;
									else if(s==1)cout<<"s 10"<<endl;
									else if(l==1)cout<<"l 10"<<endl;
								}
	return 0;
}
