#include<Stdio.h>
//int main(void)
//{
//	char c1, c2;
//	int diff;
//	float num;
//	c1 = 'S';
//c2 = 'O';
//	diff = c1 - c2;
//	num = diff;
//	printf("%c%c%c:%d %3.2f\n", c1, c2, c1, diff, num);
//	return 0;
//}
void function(int n);
void function(int n)//�����ò���ֻ����int���͵����ݡ�������������
//���κ����У�nֻ����ʽ�����������times��fΪʵ�ʱ�������������ʱ����ʵ��������ֵ������ʽ�����������к�������
{
	while (n <= 10  )//��n++С�ڵ���10ʱ�����#
	{
		n++;
		printf("#");
	}
	printf("\n");//ѭ����������
}
int main()
{
	int times = 4;
	float f = 2.3;
	char ch = 'a';
	function(times);
	function(f);//��fǿ�ƶ���Ϊint���͵�ͬ��
	function(ch);

	return 0;
}