
#include<stdio.h>
int main()
{
	//printf("hello world!\n");
	//printf("\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a");
	//int a = 89970000000000000000;
	//printf("%d/n", sizeof a);
	int a = 10;
	int b = ++a;//前置++，先++再赋值给b
	printf("a的值是%d\n",a);
	printf("b的值是%d\n",b);
	int c = 10;
	int d = c++;//后置++，先赋值给d再++
	printf("c的值是%d\n",c );
	printf("d的值是%d\n",d);
	a = 1;
	b = (++a) + (++a) + (++a);
	printf("b的值是%d\n", b);
	return 0;
}