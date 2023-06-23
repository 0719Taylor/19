#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//指针类型的意义

//int main()
//{
//	int a = 10;
//	int *p = &a; //指针变量
//	printf("%p\n",p);
//	printf("%d\n",sizeof(p));   //4
//	return 0;
//}








//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	char* pc = &a;
//	*pc = 0;  //指针类型决定了指针进行解引用操作的时候,能够访问空间的大小
//	//printf("%p\n",pa);
//	//printf("%p\n",pc);
//	return 0;
//}







//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n",pa); 
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//指针的类型决定了指针走一步走多远（指针的步长）	
//
//}





//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = arr;//数组名 -- 首元素的地址
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}






//野指针
//int main()
//{
//	//int a;//局部变量不初始化,默认是随机值
//	int* p;//局部的指针变量,就被初始化随机值
//	*p = 20;
//	return 0;
//}



	
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//	}
//	//指针访问越界
//	return 0;
//}











int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int* p = test();
	*p = 20; //局部变量a的地址所指向的空间已经被释放
	return 0;
}











































