#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//定义货物种类，通道标号，货物单价和货物个数对应的变量
	char setkind; char kindinspect;
	char goodsprint[] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M',
		'N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };//定义货物数组来处理不合理输入的货物类型
	int setroad; int setprice; int setnumber;

	printf("声明：当前售货机只考虑一种货物一个通道的情况，所以在使用时请保证前后输入数据的一致性\n");
setkind:
	printf("请输入货物种类(现有A-Z共26种货物)：");
	scanf(" %c", &setkind);
	for (int i = 0; i < 26; i++)
	{
		char a = goodsprint[i];
		if (a == setkind)
		{
			goto setroad;
		}
	}
	printf("不合理输入，请重试\n");
	goto setkind;
setroad:
	printf("请输入货物所在通道的数字标号（现有1-5五个通道）：");
	scanf(" %d", &setroad);
	if (setroad != 1 && setroad != 2 && setroad != 3 && setroad != 4 && setroad != 5)
	{
		printf("不合理输入，请重试\n");
		setroad = 0;
		goto setroad;
	}
setprice:
	printf("请输入货物单价（单价为10元以下的正整数）：");
	scanf(" %d", &setprice);
	if (setprice != 1 && setprice != 2 && setprice != 3 && setprice != 4 && setprice != 5
		&& setprice != 6 && setprice != 7 && setprice != 8 && setprice != 9)
	{
		printf("错误输入，请重试");
		goto setprice;
	}
setnumber:
	printf("请输入货物个数(1到50的一个整数,若输入小数则取整数部分)：");
	scanf(" %d", &setnumber);
	if (setnumber < 1 || setnumber>50)
	{
		printf("不合理输入，请重试\n");
		goto setnumber;
	}
	//输出摆放结果
	printf("货物%c摆放在%d号通道，单价为%d元，摆放了%d个\n", setkind, setroad, setprice, setnumber);
	for (int i = 0; i < setnumber; i++)
	{
		printf("%c", setkind);
	}
	//输入购买数据
	char buykind; int buyroad; int buynumber; int buyprice; int coin; int sum = 0;
buy:
	printf("\n请依次输入购买货物的种类，通道标号和购买数量（数据之间用一个空格隔开）\n：");
	scanf(" %c %d %d", &buykind, &buyroad, &buynumber);
	if (setkind == buykind&&setroad==buyroad)
	{
	}
	else
	{
		printf("错误输入，请保持前后一致！");
		goto buy;
	}
	buyprice = setprice;

	//投币功能
	//进行投币
	while (sum < buynumber * buyprice)
	{
		int i = 1;
		printf("请输入投币金额（每次只可投入1，2，5元）：\n");
		printf("(当前已投入%d元)\n", sum);
		scanf("%d", &coin);
		if (coin != 1 && coin != 2 && coin != 5)
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
	printf("找零%d元", sum - buynumber * buyprice);
	return 0;
}