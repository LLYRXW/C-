
#include<stdio.h>
int main()
{
	//printf("hello world!\n");
	//printf("\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a");
	//int a = 89970000000000000000;
	//printf("%d/n", sizeof a);
	int a = 10;
	int b = ++a;//ǰ��++����++�ٸ�ֵ��b
	printf("a��ֵ��%d\n",a);
	printf("b��ֵ��%d\n",b);
	int c = 10;
	int d = c++;//����++���ȸ�ֵ��d��++
	printf("c��ֵ��%d\n",c );
	printf("d��ֵ��%d\n",d);
	a = 1;
	b = (++a) + (++a) + (++a);
	printf("b��ֵ��%d\n", b);
	return 0;
}