#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int sumprice = 5;
int sum = 0;
int coin;
int main()
{
	//Ͷ�ҹ���
	//��ӡ�ܼ�
	printf("�ܼ�Ϊ%dԪ\n", sumprice);
	//����Ͷ��
	while (sum < sumprice)
	{
		int i=1;
		printf("������Ͷ�ҽ�ÿ��ֻ��Ͷ��1��2��5Ԫ����\n");
		printf("(��ǰ��Ͷ��%dԪ)\n", sum);
		scanf("%d", &coin);
		if(coin!=1&&coin!=2&&coin!=5)
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
	printf("����%dԪ", sum - sumprice);
	return 0;
}