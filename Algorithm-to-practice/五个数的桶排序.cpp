#include<stdio.h>  //五个数的桶排序，数的大小限制在 0~10 
int main()
{
	int a[11],i,j,t;  //因为从 0~10 有 11 个数，所以定义一个元素个数为 11 的数组 
	
	for(i=0;i<=10;i++)
		a[i]=0;   //初始化为0
		 
	for(i=1;i<=5;i++) 
	{
		scanf("%d",&t);  //进行五次循环输入五个数 
		a[t]++;     //记录这 5 个 从 0~10 的数中每个数出现的次数 
	}
	
	for(i=0;i<=10;i++) //依次判断 a[0]~a[10] 即数字 0~10 中每个数出现的次数 
		for(j=1;j<=a[i];j++) //当 a[i] 大于等于 1 时打印 i ，出现几次打印几次，即 a[i] 等于几就打印几次 i 
			printf("%d ",i);
		
	getchar();
	return 0; 
 } 
