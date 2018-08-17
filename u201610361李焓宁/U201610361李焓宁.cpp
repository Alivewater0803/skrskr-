#include "stdafx.h"

void square()//计算正方形面积
{
	float w, e;
	printf("请输入正方形的边长: \n");
	scanf_s("%f", &w);
	printf("请输入1英寸 2厘米\n");
	int m;
	scanf_s("%d", &m);
	if (m == 1)
	{
		w = w / 2.54;
	}
	e = w * w;
	printf("选择的是正方形\n");
	printf("正方形的边长为%fcm\n", w);
	printf("面积为:%0.3fcm*2\n", e);
}
void rectangle()//计算长方形面积