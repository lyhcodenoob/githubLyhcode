//���Է��������
//1.�����������û�п��������β	
//    ��ʱ����ʹ����һ������ķ���
//2.�������������������β
//    ��ʱѡ�� �����ܺ�-��С������͵õ�����������
//���ͨ���Ƚ������͵Ĵ�Сѡ��ʵ�ʺʹ�С

#include<iostream>
using namespace std;
int main()
{
	int i, num, Max2Sum, result;
	cout << "����������Ԫ�ظ����� ";
	cin >> num;
	int *arr = new int[num];
	cout << "��������������Ԫ��" << endl;
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
		//�ڶ��������������ֵΪSum-MinSum
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
		//��һ�������������ֵΪCurSum
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
	if (CurSum>Max2Sum)  //�ϴ��Ϊ���ֵ
	{
		result = CurSum;
	}
	else
	{
		result = Max2Sum;
	}
	cout << "�����������������ĺ��ǣ� " << result << endl;
	system("pause");
	return 0;
}