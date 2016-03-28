//可以分两个情况
//1.和最大子数组没有跨过数组首尾	
//    此时可以使用上一个程序的方法
//2.和最大子数组跨过数组首尾
//    此时选择 数组总和-最小子数组和得到最大子数组和
//最后通过比较两个和的大小选择实际和大小

#include<iostream>
using namespace std;
int main()
{
	int i, num, Max2Sum, result;
	cout << "请输入数组元素个数： ";
	cin >> num;
	int *arr = new int[num];
	cout << "请依次输入数组元素" << endl;
	for (i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	int Sum = 0;
	int temp = 0;
	int CurSum = 0;
	int MaxSum = 0;
	int MinSum = 0;
	for (i = 0; i<num; i++)
	{
		//第二种情况，求得最大值为Sum-MinSum
		Sum += arr[i];
		if (temp>0)
		{
			temp = arr[i];
		}
		else
		{
			temp = temp + arr[i];
		}
		if (temp<MinSum)
		{
			MinSum = temp;
		}
		//第一种情况，求得最大值为CurSum
		CurSum += arr[i];
		if (CurSum>MaxSum)
		{
			MaxSum = CurSum;
		}
		if (CurSum<0)
		{
			CurSum = 0;
		}
	}
	Max2Sum = Sum - MinSum;
	if (CurSum>Max2Sum)  //较大的为最大值
	{
		result = CurSum;
	}
	else
	{
		result = Max2Sum;
	}
	cout << "该数组中最大子数组的和是： " << result << endl;
	system("pause");
	return 0;
}