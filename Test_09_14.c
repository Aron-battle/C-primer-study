#include<stdio.h>
//int main(void)
//{
//	char ch;
//
//	for (ch = 'C'; ch <= 'c'; ch++)//forѭ�����治�ܼ�;
//		//ch = 'c'; ch <= 'C';�������for-loop��δִ��ѭ������
//		//��ΪC��ASCII��ֵС��c��ASCII��ֵ
//	     printf("%c��ASCII����ֵΪ%d\n", ch, ch);
//		 return 0;
//}
//int main(void)
//{
//	char ch;
//	scanf_s("%c", &ch,1);
//	while (ch <= 'c')
//	{
//		printf("%c��ASCII����ֵΪ%d\n",ch,ch);
//			ch++;
//	}



//forѭ���а����ܽ���ѭ������伴�ɡ������ж����
//int main(void)
//{
//	int num1, num2;
//	printf("������num2\n");
//	scanf_s("%d", &num2);
//	for (num1 = 2; num1 <= num2;)
//		printf("hello world\n");
//	return 0;
//}


//int main(void)
//{
//	int num1, num2;
//	num2 = 10;
//	for (scanf_s("%d", &num1); num1 <= num2;)
//		printf("hello world\n");
//	return 0;
//}
//���ű��ʽ����ִ�ж�����ߵı��ʽ����ִ�ж����ұߵı��ʽ
// num1++,num2 = num1 * num1��num2 = num 1 * num1,num1++
//ǰ�ߣ�num1���Լ�Ȼ���ٲ���num2�ļ��㣻�����Ƚ���num2�ļ����ٶ�num�����Լ�

//zone��forѭ��
//for(��ʼ�����ж���䣻����)
int main(void)
{
	int t_ct;//��¼��ǰ��������
	double time, power_of_2;
	int limit;//�Ե�������������
	printf("��������Ҫ��������");
	scanf_s("%d", &limit);
	for (time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit;
		t_ct++, power_of_2 *= 2.0)
//���ȳ�ʼ��time��power_of_2��t_ct��ֵ���ж���䣺������ǰ��������С�ڵ�������������ʱ��
//���µ�ǰ����������ֵ������power_of_2��ֵ����2��
	{
		time += 1.0 / power_of_2;
		printf("��������limit=%dʱ��Ӧ��ʱ��time=%f\n", limit, time);
	}
	//ѭ���嵱t_ct <= limitʱ����1.0/power_of_2��ֵ�����ۼӣ�������ۼ�ֵ
	return 0;
}