#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

//�����������ַ���������

//void rev1(char *a)
//{
//	int i = 0;
//	size_t len = strlen(a) - 1;
//	while (i <  len- i)
//	{
//		char tmp = 0;
//		tmp = a[i];
//		a[i] = a[len -i];
//		a[len - i] = tmp;
//		i++;
//	}
//	printf("%s", a);
//}
//int main()
//{
//	char a[100] = {0};
//	scanf("%s",a);
//	rev1(a);
//	return 0;
//}

//void rev2(char* pa)
//{
//	assert(pa);
//	int len = strlen(pa) - 1;//strlen����ȥ������Ԫ�صĵ�ַ��һֱ�ҵ�\0
//	char* left = pa;
//	char* right = pa + len;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//
//	}
//
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	//scanf("%s", arr);//�пո�ʱ����
//	gets(arr);
//	rev2(arr);
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum=sum+ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//�ж��Ƿ�Ϊˮ�ɻ���
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		//�ҳ�һ������λ
//		while (tmp/=10)
//		{
//			n++;
//		}
//		tmp = i;
//		//����i��ÿһλ��n�η�֮��
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ",i);
//		}
//		
//
//	}
//	return 0;
//}

//��ӡ����

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	//��ӡ�ϰ벿��
	for (i = 0; i < n; i++)
	{
		int j = 0;
		//��ӡ�ո�
		for (j = 0; j < n-1-i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");

	}
	//��ӡ�°벿��
	for (i = 0; i < n - 1; i++)
	{
		int j = 0;
		for (j = 0; j <i+1 ; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2*(n-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");

	}
	return 0;
}