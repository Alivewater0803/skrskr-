#include "stdafx.h"

void square()//�������������
{
	float w, e;
	printf("�����������εı߳�: \n");
	scanf_s("%f", &w);
	printf("������1Ӣ�� 2����\n");
	int m;
	scanf_s("%d", &m);
	if (m == 1)
	{
		w = w / 2.54;
	}
	e = w * w;
	printf("ѡ�����������\n");
	printf("�����εı߳�Ϊ%fcm\n", w);
	printf("���Ϊ:%0.3fcm*2\n", e);
}
void rectangle()//���㳤�������