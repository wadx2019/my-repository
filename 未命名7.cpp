#include<stdio.h>
#include<time.h>
inline int ksc(int x)
{
   	int res=0;
    int y=x;
    while(y)
	{
        if(y&1)
			res=res+x;
        x=x<<1;
		y>>=1;
    }
	return res;
}
int sqrt(int x)
{
	int left=2,right=x>>1;
	if(x<4)
		return 1;
	else
	{
		while(left+1<right)
		{
			int mid=(left+right)>>1;
			int squre=ksc(mid);
			if(squre>x)
			{
				right=mid;
			}
			else if(squre==x)
			{
				return mid;
			}
			else
			{
				left=mid;
			}
		}
		return left;
	}
}
int main()
{
	int i;
	int start=clock();
	int che=1000;
	for(i=1;i<=1000000;i++)
	{
		int tmp=che*che;
	}
	int end1=clock();
	for(i=1;i<=1000000;i++)
	{
		int tmp=ksc(che);
	}
	int end2=clock();
	printf("%d \n%d",end1-start,end2-end1);
}
