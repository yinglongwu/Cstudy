#include<stdio.h>
int main()
{
	int s[6],n,left,right,num,i,t,sum;
	scanf("%d",&n);
	for(num=10000;num<=99999;num++)
	{
		sum=0;
		i=0;
		t=num;
		while(t>0)
		{
			s[i++]=t%10;
			t=t/10;	
		}
		for(i=0;i<=4;i++)
			sum=sum+s[i];
		if(sum==n)
		{
			left=s[0]*10+s[1];
			right=s[4]*10+s[3];
			if(right==left)
				printf("%d\n",num);
		}
	}
	for(num=100000;num<=999999;num++)
	{
		sum=0;
			i=0;
			t=num;
			while(t>0)
			{
				s[i++]=t%10;
				t=t/10;	
			}
			for(i=0;i<=5;i++)
				sum=sum+s[i];
			if(sum==n)
			{
				left=s[0]*100+s[1]*10+s[2];
				right=s[5]*100+s[4]*10+s[3];
				if(right==left)
					printf("%d\n",num);
			}	
	}
	return 0;
}
