#include <stdio.h>//函数头 

main()//主函数结束 
{
	int x,n,sum=0,i;//定义了四个变量 
	scanf("%d %d",&x,&n);//输入周X和天数 
	sum=n/7*250*5;//计算完整的周游泳长度 
	n%=7;//剩余的天数 
	i=x+n;//边界条件 
	if(n%7!=0){//如果不是整周 
		for(;x<i;x++){//循环开始 
			if(x!=6&&x!=7&&x!=13){//如果不是周末 
				sum+=250;//加一天游泳的长度 
			}
		}
	}
	printf("%d",sum);//输出结果 
	return 0;//主函数结束 
}
