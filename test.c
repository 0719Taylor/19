#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//ָ�����͵�����

//int main()
//{
//	int a = 10;
//	int *p = &a; //ָ�����
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
//	*pc = 0;  //ָ�����;�����ָ����н����ò�����ʱ��,�ܹ����ʿռ�Ĵ�С
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
//	printf("%p\n", pc+1);//ָ������;�����ָ����һ���߶�Զ��ָ��Ĳ�����	
//
//}





//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = arr;//������ -- ��Ԫ�صĵ�ַ
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}






//Ұָ��
//int main()
//{
//	//int a;//�ֲ���������ʼ��,Ĭ�������ֵ
//	int* p;//�ֲ���ָ�����,�ͱ���ʼ�����ֵ
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
//	//ָ�����Խ��
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
	*p = 20; //�ֲ�����a�ĵ�ַ��ָ��Ŀռ��Ѿ����ͷ�
	return 0;
}











































