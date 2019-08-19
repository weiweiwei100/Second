﻿// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
		int choice;
		int unit;
		float area;
		cout << "请选择图形类型：" << endl;
		cout << "1、正方形" << endl;
		cout << "2、长方形" << endl;
		cout << "3、三角形" << endl;
		cout << "4、圆形" << endl;
		cin >> choice;
		cout << "请选择长度单位：" << endl;
		cout << "1、厘米" << endl;
		cout << "2、英寸" << endl;
		cin >> unit;
		if (choice == 1) {
			cout << "请输入正方形的边长：" << endl;
			double length;
			cin >> length;
			if (unit == 2)
			{
				length *= 2.54;
			}
			area = length * length;
			cout << "图形类型：正方形" << endl;
			cout << "边长：" << length << endl;
			cout << "面积" << fixed << setprecision(3) << area << endl;
		}
		else if (choice == 2) {
			cout << "请输入长方形的长：" << endl;
			double length;
			double width;
			cin >> length;
			cout << "请输入长方形的宽：" << endl;
			cin >> width;
			if (unit == 2)
			{
				length *= 2.54;
				width *= 2.54;
			}
			area = length * width;
			cout << "图形类型：长方形" << endl;
			cout << "长：" << length << endl;
			cout << "宽：" << width << endl;
			cout << "面积" << fixed << setprecision(3) << area << endl;
		}
		else if (choice == 3) {
			cout << "请输入三角形的底：" << endl;
			double length;
			double width;
			cin >> length;
			cout << "请输入三角形的高：" << endl;
			cin >> width;
			if (unit == 2)
			{
				length *= 2.54;
				width *= 2.54;
			}
			area = length * width / 2;
			cout << "图形类型：三角形" << endl;
			cout << "底：" << length << endl;
			cout << "高：" << width << endl;
			cout << "面积" << fixed << setprecision(3) << area << endl;
		}
		else if (choice == 4) {
			cout << "请输入圆形的直径：" << endl;
			double diameter;
			double radius;
			cin >> diameter;
			if (unit == 2)
			{
				diameter *= 2.54;
			}
			radius = diameter / 2;
			area = 3.14*radius*radius;
			cout << "图形类型：圆形" << endl;
			cout << "直径：" << diameter << endl;
			cout << "面积" << fixed << setprecision(3) << area << endl;
		}
		return 0;
	}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
