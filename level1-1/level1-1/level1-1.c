#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//level1-1�ڷŻ���
//ֻ����һ������һ��ͨ��
//������������
int main()
{
	//����������࣬ͨ����ţ����ﵥ�ۺͻ��������Ӧ�ı���
	char kind; char kindinspect;
	char goodsprint[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M',
		'N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };//�������������������������Ļ�������
	int road;
	int price;
	int number;
	
setkind:
	printf("�������������(����A-Z��26�ֻ���)��");
	scanf(" %c", &kind);
	for (int i=0;i<26;i++)
	{
		char a = goodsprint[i];
		if(a==kind)
		{
			goto setroad;
		}
	}
	printf("���������룬������\n");
	goto setkind;

setroad:
	printf("�������������ͨ�������ֱ�ţ�����1-5���ͨ������");
	scanf(" %d", &road);
	if (road != 1 && road != 2 && road != 3 && road != 4 && road != 5)
	{
		printf("���������룬������\n");
		road = 0;
		goto setroad;
	}
setprice:
	printf("��������ﵥ�ۣ�����Ϊ10Ԫ���µ�����������");
	scanf(" %d", &price);
	if(price!=1&& price != 2 && price != 3 && price != 4 && price != 5
		&& price != 6 && price != 7 && price != 8 && price != 9)
	{
		printf("�������룬������");
		goto setprice;
	}
setnumber:
	printf("������������(1��50��һ������,������С����ȡ��������)��");
	scanf(" %d", &number);

	if (number < 1 || number>50)
	{
		printf("���������룬������\n");
		goto setnumber;
	}
	//����ڷŽ��
	printf("����%c�ڷ���%d��ͨ��������Ϊ%dԪ���ڷ���%d��", kind,road,price,number );
	return 0;
}