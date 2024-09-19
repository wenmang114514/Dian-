//单个通道：
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int goods1[26] = { 0 };
int goods2[26] = { 0 };
int goods3[26] = { 0 };
int goods4[26] = { 0 };
int goods5[26] = { 0 };
char goodsprint[] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M',
'N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
int main()
{
	//1.先输入数据
	int kind1; int kind2;
	int road1; int road2;
	int loadprice;int price[26] = { 0 };
	int number1; int number2;
	int setornot; int buyornot;
	int sum = 0; int sum1=0; int sum2=0; int sum3=0; int sum4=0; int sum5=0;
	int coin;
	int coinornot;
	set:
	printf("请输入货物类型(整数1到26正好对应货物A到Z)：");
	scanf("%d", &kind1);
	printf("请输入上货通道：");
	scanf("%d", &road1);
	if (road1 != 1 && road1 != 2 && road1 != 3 && road1 != 4 && road1 != 5)
	{
		printf("错误输入，没有这个通道，请重试\n");
		goto set;
	}
	printf("请输入货物单价：");
	scanf("%d", &loadprice);
	price[kind1 - 1] = loadprice;
	printf("请输入货物个数：");
	scanf("%d", &number1);
	
	//与下面通道代码结合判断是否超出最大数量
	for (int i = 0; i < 26; i++)
	{
		sum1 = sum1 + goods1[i];
		sum2 = sum2 + goods2[i];
		sum3 = sum3 + goods3[i];
		sum4 = sum4 + goods4[i];
		sum5 = sum5 + goods5[i];
	}
	

	//2.根据输入数据进入通道
	switch (road1)
	{
	case 1:
		if (sum1 + number1 > 50)
		{

			printf("超过通道所能容纳的最大货物数量，请重新输入:\n");
			goto set;
		}
		goods1[kind1 - 1] = goods1[kind1 - 1] + number1;
		break;
	case 2:
		if (sum2 + number1 > 50)
		{

			printf("超过通道所能容纳的最大货物数量，请重新输入:\n");
			goto set;
		}
		goods2[kind1 - 1] = goods2[kind1 - 1] + number1;
		break;
	case 3:
		if (sum3 + number1 > 50)
		{

			printf("超过通道所能容纳的最大货物数量，请重新输入:\n");
			goto set;
		}
		goods3[kind1 - 1] = goods3[kind1 - 1] + number1;
		break;
	case 4:
		if (sum4 + number1 > 50)
		{

			printf("超过通道所能容纳的最大货物数量，请重新输入:\n");
			goto set;
		}
		goods4[kind1 - 1] = goods4[kind1 - 1] + number1;
		break;
	case 5:
		if (sum5 + number1 > 50)
		{

			printf("超过通道所能容纳的最大货物数量，请重新输入:\n");
			goto set;
		}
		goods5[kind1 - 1] = goods5[kind1 - 1] + number1;
		break;
	}

	printf("通道%d:", road1);
	for (int i = 0; i < number1; i++)
	{
		printf("%c", goodsprint[kind1 - 1]);
	}
	printf("\t%d元/个", loadprice);

	//3.是否继续上货
setornot:
	printf("\n是否继续摆放货物？(如果是请输入1，不是请输入0)");
	scanf("%d",&setornot);
	if (setornot == 1)
	{
		goto set;
	}
	else if (setornot == 0)
	{
	}
	else
	{
		printf("错误输入，请重试");
		goto setornot;
	}
	//4.购买功能
	// ①录入数据
	buy:
	printf("请输入购买的货物类型：");
	scanf("%d", &kind2);
	printf("请输入购买通道：");
	scanf("%d", &road2);
	printf("请输入购买货物个数：");
	scanf("%d", &number2);
	//②进行货物数量计算
	switch (road2)
	{
	case 1:
		printf("当前通道%d中有货物%c%d个，是否确认购买？（确认请输入1，否请输入0）",road2,kind2,goods1[kind2-1]);
		scanf("%d",&buyornot);
		if (buyornot == 0)
		{
			goto buy;
		}
		else if (buyornot == 1)
		{
			goods1[kind2 - 1] = goods1[kind2 - 1] - number1;
			if (goods1[kind2 - 1] < 0)
			{
				printf("该通道的该类货物不足，请重新输入：\n");
				goods1[kind2 - 1] = goods1[kind2 - 1] + number1;
				goto buy;
			}
			else
			{
				goto coinoperated;
			}
		}
		else
		{
			printf("错误输入，请重试");
			goto buy;
		}

	case 2:
		printf("当前通道%d中有货物%c%d个，是否确认购买？（确认请输入1，否请输入0）",road2, kind2, goods2[kind2 - 1]);
		scanf("%d",& buyornot);
		if (buyornot == 0)
		{
			goto buy;
		}
		else if (buyornot == 1)
		{
			goods2[kind2 - 1] = goods2[kind2 - 1] - number1;
			if (goods2[kind2 - 1] < 0)
			{
				printf("该通道的该类货物不足，请重新输入：\n");
				goods2[kind2 - 1] = goods2[kind2 - 1] + number1;
				goto buy;
			}
			else
			{
				goto coinoperated;
			}
		}
		else
		{
			printf("错误输入，请重试");
			goto buy;
		}

	case 3:
		printf("当前通道%d中有货物%c%d个，是否确认购买？（确认请输入1，否请输入0）", road2, kind2, goods3[kind2 - 1]);
		scanf("%d", &buyornot);
		if (buyornot == 0)
		{
			goto buy;
		}
		else if (buyornot == 1)
		{
			goods3[kind2 - 1] = goods3[kind2 - 1] - number1;
			if (goods3[kind2 - 1] < 0)
			{
				printf("该通道的该类货物不足，请重新输入：\n");
				goods3[kind2 - 1] = goods3[kind2 - 1] + number1;
				goto buy;
			}
			else
			{
				goto coinoperated;
			}
		}
		else
		{
			printf("错误输入，请重试");
			goto buy;
		}

	case 4:
		printf("当前通道%d中有货物%c%d个，是否确认购买？（确认请输入1，否请输入0）", road2, kind2, goods4[kind2 - 1]);
		scanf("%d", &buyornot);
		if (buyornot == 0)
		{
			goto buy;
		}
		else if (buyornot == 1)
		{
			goods4[kind2 - 1] = goods4[kind2 - 1] - number1;
			if (goods4[kind2 - 1] < 0)
			{
				printf("该通道的该类货物不足，请重新输入：\n");
				goods4[kind2 - 1] = goods4[kind2 - 1] + number1;
				goto buy;
			}
			else
			{
				goto coinoperated;
			}
		}
		else
		{
			printf("错误输入，请重试");
			goto buy;
		}

	case 5:
		printf("当前通道%d中有货物%c%d个，是否确认购买？（确认请输入1，否请输入0）", road2, kind2, goods5[kind2 - 1]);
		scanf("%d",& buyornot);
		if (buyornot == 0)
		{
			goto buy;
		}
		else if (buyornot == 1)
		{
			goods5[kind2 - 1] = goods5[kind2 - 1] - number1;
			if (goods5[kind2 - 1] < 0)
			{
				printf("该通道的该类货物不足，请重新输入：\n");
				goods5[kind2 - 1] = goods5[kind2 - 1] + number1;
				goto buy;
			}
			else
			{
				goto coinoperated;
			}
		}
		else
		{
			printf("错误输入，请重试");
			goto buy;
		}

		//5.投币直到金额足够
	coinoperated:
		while (sum < number2 * price[kind2 - 1])
		{
			printf("投币中，请选择投币金额（当前已投入%d元）:",sum);
			scanf("%d", &coin);
			if (coin == 1 || coin == 2 || coin == 5)
			{
				sum = sum + coin;
			}
			else
			{
				printf("错误输入，请重试");
				goto coinoperated;
			}
		}
		
	confirmpurchase:
		printf("当前金额足够，请输入1来确认购买，输入0来重新投币");
		scanf("%d",&coinornot);
		if(coinornot==0)
		{
			sum = 0;
			goto coinoperated;
		}
		else if(coinornot==1)
		{
		}
		else
		{
			printf("错误输入，请重试");
			goto confirmpurchase;
		}


		//6.提示购买成功并找零钱
	change:
		printf("购买成功！找零%d元", sum - number2 * price[kind2-1]);
	}
	return 0;
}
//回退功能是回退一小步！先完成2-1再去考虑小步回退吧！