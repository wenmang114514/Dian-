//����ͨ����
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
	//1.����������
	int kind1; int kind2;
	int road1; int road2;
	int loadprice;int price[26] = { 0 };
	int number1; int number2;
	int setornot; int buyornot;
	int sum = 0; int sum1=0; int sum2=0; int sum3=0; int sum4=0; int sum5=0;
	int coin;
	int coinornot;
	set:
	printf("�������������(����1��26���ö�Ӧ����A��Z)��");
	scanf("%d", &kind1);
	printf("�������ϻ�ͨ����");
	scanf("%d", &road1);
	if (road1 != 1 && road1 != 2 && road1 != 3 && road1 != 4 && road1 != 5)
	{
		printf("�������룬û�����ͨ����������\n");
		goto set;
	}
	printf("��������ﵥ�ۣ�");
	scanf("%d", &loadprice);
	price[kind1 - 1] = loadprice;
	printf("��������������");
	scanf("%d", &number1);
	
	//������ͨ���������ж��Ƿ񳬳��������
	for (int i = 0; i < 26; i++)
	{
		sum1 = sum1 + goods1[i];
		sum2 = sum2 + goods2[i];
		sum3 = sum3 + goods3[i];
		sum4 = sum4 + goods4[i];
		sum5 = sum5 + goods5[i];
	}
	

	//2.�����������ݽ���ͨ��
	switch (road1)
	{
	case 1:
		if (sum1 + number1 > 50)
		{

			printf("����ͨ���������ɵ�����������������������:\n");
			goto set;
		}
		goods1[kind1 - 1] = goods1[kind1 - 1] + number1;
		break;
	case 2:
		if (sum2 + number1 > 50)
		{

			printf("����ͨ���������ɵ�����������������������:\n");
			goto set;
		}
		goods2[kind1 - 1] = goods2[kind1 - 1] + number1;
		break;
	case 3:
		if (sum3 + number1 > 50)
		{

			printf("����ͨ���������ɵ�����������������������:\n");
			goto set;
		}
		goods3[kind1 - 1] = goods3[kind1 - 1] + number1;
		break;
	case 4:
		if (sum4 + number1 > 50)
		{

			printf("����ͨ���������ɵ�����������������������:\n");
			goto set;
		}
		goods4[kind1 - 1] = goods4[kind1 - 1] + number1;
		break;
	case 5:
		if (sum5 + number1 > 50)
		{

			printf("����ͨ���������ɵ�����������������������:\n");
			goto set;
		}
		goods5[kind1 - 1] = goods5[kind1 - 1] + number1;
		break;
	}

	printf("ͨ��%d:", road1);
	for (int i = 0; i < number1; i++)
	{
		printf("%c", goodsprint[kind1 - 1]);
	}
	printf("\t%dԪ/��", loadprice);

	//3.�Ƿ�����ϻ�
setornot:
	printf("\n�Ƿ�����ڷŻ��(�����������1������������0)");
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
		printf("�������룬������");
		goto setornot;
	}
	//4.������
	// ��¼������
	buy:
	printf("�����빺��Ļ������ͣ�");
	scanf("%d", &kind2);
	printf("�����빺��ͨ����");
	scanf("%d", &road2);
	printf("�����빺����������");
	scanf("%d", &number2);
	//�ڽ��л�����������
	switch (road2)
	{
	case 1:
		printf("��ǰͨ��%d���л���%c%d�����Ƿ�ȷ�Ϲ��򣿣�ȷ��������1����������0��",road2,kind2,goods1[kind2-1]);
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
				printf("��ͨ���ĸ�����ﲻ�㣬���������룺\n");
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
			printf("�������룬������");
			goto buy;
		}

	case 2:
		printf("��ǰͨ��%d���л���%c%d�����Ƿ�ȷ�Ϲ��򣿣�ȷ��������1����������0��",road2, kind2, goods2[kind2 - 1]);
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
				printf("��ͨ���ĸ�����ﲻ�㣬���������룺\n");
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
			printf("�������룬������");
			goto buy;
		}

	case 3:
		printf("��ǰͨ��%d���л���%c%d�����Ƿ�ȷ�Ϲ��򣿣�ȷ��������1����������0��", road2, kind2, goods3[kind2 - 1]);
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
				printf("��ͨ���ĸ�����ﲻ�㣬���������룺\n");
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
			printf("�������룬������");
			goto buy;
		}

	case 4:
		printf("��ǰͨ��%d���л���%c%d�����Ƿ�ȷ�Ϲ��򣿣�ȷ��������1����������0��", road2, kind2, goods4[kind2 - 1]);
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
				printf("��ͨ���ĸ�����ﲻ�㣬���������룺\n");
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
			printf("�������룬������");
			goto buy;
		}

	case 5:
		printf("��ǰͨ��%d���л���%c%d�����Ƿ�ȷ�Ϲ��򣿣�ȷ��������1����������0��", road2, kind2, goods5[kind2 - 1]);
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
				printf("��ͨ���ĸ�����ﲻ�㣬���������룺\n");
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
			printf("�������룬������");
			goto buy;
		}

		//5.Ͷ��ֱ������㹻
	coinoperated:
		while (sum < number2 * price[kind2 - 1])
		{
			printf("Ͷ���У���ѡ��Ͷ�ҽ���ǰ��Ͷ��%dԪ��:",sum);
			scanf("%d", &coin);
			if (coin == 1 || coin == 2 || coin == 5)
			{
				sum = sum + coin;
			}
			else
			{
				printf("�������룬������");
				goto coinoperated;
			}
		}
		
	confirmpurchase:
		printf("��ǰ����㹻��������1��ȷ�Ϲ�������0������Ͷ��");
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
			printf("�������룬������");
			goto confirmpurchase;
		}


		//6.��ʾ����ɹ�������Ǯ
	change:
		printf("����ɹ�������%dԪ", sum - number2 * price[kind2-1]);
	}
	return 0;
}
//���˹����ǻ���һС���������2-1��ȥ����С�����˰ɣ�