//4.8�����ϰ
#include<stdio.h>
//4.8.1
//int main(void)
//{
//	char name[40];
//	printf("�������������\n");
//	scanf_s("%s", name,40);//����scanf_s��������Ҫ�ṩһ�������Ա�������ȡ����λ�ַ�
//	printf("��������ǣ�%s\n", name);
//	return 0;
//}

//4.8.2
//int main(void)
//{
//	char name[40];
//	printf("�������������\n");
//	scanf_s("%s", name,40);//����scanf_s��������Ҫ�ṩһ�������Ա�������ȡ����λ�ַ�
//	printf("��������ǣ�\"%s\"\n", name);
//	printf("��������ǣ�\"%20s\"\n", name);
//	printf("��������ǣ�\"%-20s\"\n", name);
//	printf("���������:   %s\n", name);
//	return 0;
//}

//4.8.3
//int main(void)
//{
//	float a=0.0;
//	scanf_s("%f",&a);//��Ҫ��&��Ҫ��Ȼ�Ҳ����洢��ַ
//	printf("����%.1f��%.1e\n",a,a);
//	printf("����%+.3f��%.3e\n",a,a);
//	return 0;
//}

//4.8.4
int main(void)
{
	float tall = 0;
	char name[20];
	printf("�����������ߺ�����\n");
	scanf_s("%f%s", &tall, name, 20);
	printf("%s���������%.2f\n",name,tall/100.0);
	return 0;
}