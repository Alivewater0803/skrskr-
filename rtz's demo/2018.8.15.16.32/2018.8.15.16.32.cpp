// 2018.8.15.16.32.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include<math.h>

using namespace std;

int main()
{
	cout << "1.square" << endl;
	cout << "2.rectange" << endl;
	cout << "3.triange" << endl;
	cout << "4.roundness" << endl;
	cout << "5.quit" << endl;
	cout << "选择序号" << endl;
	const double Pi = 3.1415926;
	int sn, nm;//选择序号
	cin >> sn;
	double acreage;
	while (sn != 5)
	{
		if (sn == 1)
		{
			double a;
			cout << "1.厘米单位" << endl;
			cout << "2.英寸单位" << endl;
			cin >> nm;
			cout << "边长：";
			cin >> a;
			if (nm == 1)
			{
				a = a;
			}
			else
			{
				a = 2.54*a;
			}
			acreage = a * a;
			cout << "圆形" << " " << "边长为：" << a << "cm" << " " << "面积为";
			printf("%7.3f", acreage);
			cout << "c㎡";
			system("pause");
			break;
		}
		else if (sn == 2)
		{
			double b, c;
			cout << "1.厘米单位" << endl;
			cout << "2.英寸单位" << endl;
			cin >> nm;
			cout << "长";
			cin >> b;
			cout << "宽";
			cin >> c;
			if (nm == 1)
			{
				b = b;
				c = c;
			}
			else
			{
				b = 2.54*b;
				c = 2.54*c;
			}
			acreage = b * c;
			cout << "长方形" << " " << "长为：" << b << "cm" << " " << "宽为：" << c << "cm" << " " << "面积为";
			printf("%7.3f", acreage);
			cout << "c㎡";
			system("pause");
			break;
		}
		else if (sn == 3)
		{
			double f, h;
			cout << "1.厘米单位" << endl;
			cout << "2.英寸单位" << endl;
			cin >> nm;
			cout << "底";
			cin >> f;
			cout << "高";
			cin >> h;
			if (nm == 1)
			{
				f = f;
				h = h;
			}
			else
			{
				f = 2.54*f;
				h = 2.54*h;
			}
			acreage = 0.5*f*h;
			cout << "三角形" << " " << "底为：" << f << "cm" << " " << "高为：" << h << "cm" << " " << "面积为";
			printf("%7.3f", acreage);
			cout << "c㎡";
			system("pause");
			break;
		}
		else if (sn == 4)
		{
			double D;
			cout << "1.厘米单位" << endl;
			cout << "2.英寸单位" << endl;
			cin >> nm;
			cout << "直径";
			cin >> D;
			if (nm == 1)
			{
				D = D;
			}
			else
			{
				D = 2.54*D;
			}
			acreage = 0.25*Pi*D*D;
			cout << "圆形" << " " << "直径为：" << D << "cm" << " " << "面积为";
			printf("%7.3f", acreage);
			cout << "c㎡";
			system("pause");
			break;
		}
		else
			break;
	}
    return 0;
}

