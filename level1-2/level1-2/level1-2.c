#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int sumprice = 5;
int sum = 0;
int coin;
int main()
{
	//投币功能
	//打印总价
	printf("总价为%d元\n", sumprice);
	//进行投币
	while (sum < sumprice)
	{
		int i=1;
		printf("请输入投币金额（每次只可投入1，2，5元）：\n");
		printf("(当前已投入%d元)\n", sum);
		scanf("%d", &coin);
		if(coin!=1&&coin!=2&&coin!=5)
		{
			printf("输入金额不在规定金额内，请重试\n");
		}
		else
		{
			printf("第%d次投入%d元\n", i, coin);
			sum = sum + coin;
			i++;
		}
	}
	printf("此时投币金额足够，执行找零\n");
	printf("找零%d元", sum - sumprice);
	return 0;
}