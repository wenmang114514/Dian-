#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//����������࣬ͨ����ţ����ﵥ�ۺͻ��������Ӧ�ı���
	char setkind; char kindinspect;
	char goodsprint[] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M',
		'N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };//�������������������������Ļ�������
	int setroad; int setprice; int setnumber;

	printf("��������ǰ�ۻ���ֻ����һ�ֻ���һ��ͨ���������������ʹ��ʱ�뱣֤ǰ���������ݵ�һ����\n");
setkind:
	printf("�������������(����A-Z��26�ֻ���)��");
	scanf(" %c", &setkind);
	for (int i = 0; i < 26; i++)
	{
		char a = goodsprint[i];
		if (a == setkind)
		{
			goto setroad;
		}
	}
	printf("���������룬������\n");
	goto setkind;
setroad:
	printf("�������������ͨ�������ֱ�ţ�����1-5���ͨ������");
	scanf(" %d", &setroad);
	if (setroad != 1 && setroad != 2 && setroad != 3 && setroad != 4 && setroad != 5)
	{
		printf("���������룬������\n");
		setroad = 0;
		goto setroad;
	}
setprice:
	printf("��������ﵥ�ۣ�����Ϊ10Ԫ���µ�����������");
	scanf(" %d", &setprice);
	if (setprice != 1 && setprice != 2 && setprice != 3 && setprice != 4 && setprice != 5
		&& setprice != 6 && setprice != 7 && setprice != 8 && setprice != 9)
	{
		printf("�������룬������");
		goto setprice;
	}
setnumber:
	printf("������������(1��50��һ������,������С����ȡ��������)��");
	scanf(" %d", &setnumber);
	if (setnumber < 1 || setnumber>50)
	{
		printf("���������룬������\n");
		goto setnumber;
	}
	//����ڷŽ��
	printf("����%c�ڷ���%d��ͨ��������Ϊ%dԪ���ڷ���%d��\n", setkind, setroad, setprice, setnumber);
	for (int i = 0; i < setnumber; i++)
	{
		printf("%c", setkind);
	}
	//���빺������
	char buykind; int buyroad; int buynumber; int buyprice; int coin; int sum = 0;
buy:
	printf("\n���������빺���������࣬ͨ����ź͹�������������֮����һ���ո������\n��");
	scanf(" %c %d %d", &buykind, &buyroad, &buynumber);
	if (setkind == buykind&&setroad==buyroad)
	{
	}
	else
	{
		printf("�������룬�뱣��ǰ��һ�£�");
		goto buy;
	}
	buyprice = setprice;

	//Ͷ�ҹ���
	//����Ͷ��
	while (sum < buynumber * buyprice)
	{
		int i = 1;
		printf("������Ͷ�ҽ�ÿ��ֻ��Ͷ��1��2��5Ԫ����\n");
		printf("(��ǰ��Ͷ��%dԪ)\n", sum);
		scanf("%d", &coin);
		if (coin != 1 && coin != 2 && coin != 5)
		{
			printf("������ڹ涨����ڣ�������\n");
		}
		else
		{
			printf("��%d��Ͷ��%dԪ\n", i, coin);
			sum = sum + coin;
			i++;
		}
	}
	printf("��ʱͶ�ҽ���㹻��ִ������\n");
	printf("����%dԪ", sum - buynumber * buyprice);
	return 0;
}