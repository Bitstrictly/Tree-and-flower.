#include<stdio.h>
#include<string.h>
struct Book
{
	char name[20];
	short price;
};

int main()
{
	struct Book b1={"C���Գ������",55};
	strcpy(b1.name,"c++");
	printf("%s\n",b1.name);
	//struct Book*pb=&b1;
	//����pb��ӡ���ҵ������ͼ۸�
	//. ������  �ṹ�����.��Ա
	//-> �ṹ��ָ��->��Ա 
	//printf("%s\n",(*pb).name);
	//printf("%d\n",(*pb).price);
	
	//printf("%s\n",pb->name);
	//printf("%d\n",pb->price);
	
	/*
	printf("����:%s\n",b1.name);
	printf("�۸�:%d\n",b1.price);
	b1.price=15;
	printf("�޸ĺ�۸�:%d\n",b1.price);*/
	return 0;
}


//���Ӷ���-�ṹ��-�����Լ����������һ������ 

/*
int main()
{
	printf("%d\n",sizeof(char*));
		printf("%d\n",sizeof(short*));
		printf("%d\n",sizeof(int*));
		printf("%d\n",sizeof(double*));
	
	return 0;
}
*/



/*
int main()
{
	double d=3.14;
	double*pd=&d;
	printf("%d\n",sizeof(pd));
	//*pd=5.5;
	//printf("%lf\n",d);
	return 0;
}*/




/*
int main()
{
	int a=10;
	int* p=&a;
	printf("%p\n",p);
	return 0;
}
*/


/* //int*��һ������ 
int main()
{
	int a=10;
	int*p=&a;
	//printf("a=%d\n",a); 
	//��һ�ֱ���p ��������ŵ�ַ��-ָ�����
	*p=20;
	printf("a=%d\n",a);
	//*p�����ò�����/��ӷ��ʲ����� 
	return 0;
	
	
 } 
*/



/* 
//#define����ı�ʶ������
#define MAX 100
int main()
{
	int a=MAX;
	printf("MAX=%d\n",MAX);
	return 0;
}*/




/*
//static���κ����������������ԣ��ⲿ�������ԡ��ڲ���������  
//static���ξֲ��������ֲ��������������ڱ߳� 
//static����ȫ�ֱ����� �ı��˱�����������--�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
// ����Դ�ļ���û��ʹ����
 
void test()
{
	static int a=1;//aһ����̬�ľֲ�����   
	a++;
	printf("a=%d\n",a);
}
int main()
{
	int i=0;         
	while(i<5)
	{
		test();
		i++;
	}
	return 0;
}
*/




/* 
int main()
{
	//int arr[10]={0};
	//arr[4];[]�±����ò����� 
	int a=10;
	int b=20;
	int sum=Add(a,b);//�������ò�����  
	
	return 0;
 } 
*/

/* ����������   ��ľ������   exp?exp2;exp3;
int main()
{
	int a=100;
	int b=20;
	int max =0;
	
	max=(a>b?a:b);
	if (a>b)
		max=a;
	else
		max=b;
	
	return 0;
}*/

/*
int Add(int x,int y)
{
	int z=x+y;
	return z;
}
int main()
{
	int a=10;
	int b=20;
	int sum=0;
	sum=Add(a,b);
	printf("sum=%d\n",sum);
	return 0;
}
*/




//�߼���||   ֻҪ��һ��Ϊ������� 
/*�߼��� &&   ����ȫΪ������� 
int main()
{
	int a=0;
	int b=5;
	int c=a&&b;
	printf("c=%d\n",c);
	return 0;
}
*/



/*
//ǿ������ת�� 
int main()
{
	int a=(int)3.14;//double>int
	
	return 0;
}
*/


/*
int main()
{
	int a=10;
	//int b=++a;//ǰ��++����++����ʹ�� 
	int b=--a;//ǰ��--����--����ʹ�� 
	printf("a=%d b=%d\n",a,b);
	return 0;
}
*/



/* 
int main()
{
	int a=10;
	//int b=a++;//����++����ʹ�ã���++
	int b=a--;//����--����ʹ�ã���-- 
	printf("a=%d b=%d\n",a,b);
	return 0;
}
*/

/* 
int main()
{
	int a=0;//4���ֽڣ�32������λ 
	int b=~a;//~��(������)λȡ��
	//ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ��� 
	//��������ԭ�룬���룬������ͬ  
	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ��� 
	//ԭ�룬���룬 ����
	//ԭ��-- ֱ�Ӱ�������д���Ķ���������
	// ����--ԭ��ķ���λ���䣬����λ��λȡ���õ�
	//����--�����һ�õ��� 
	//ԭ��ȡ��Ϊ���룬����+1λ�ǲ���  
	printf("%d\n",b); 
	return 0;
}*/




//����һ����stdio.h���ļ�
//std-��׼standard input output 
//#define _CRT_SSECURE_NO_WARNINGS 1
 
//#include<stdio.h>

//int main()
//{
	//δ�����ı�ʶ��
	//����extern�ⲿ���ŵ� 
//	extern int g_val; 
//	printf("g_val = %d\n",g_val);
//	return 0;
//}



//int num2=20;//ȫ�ֱ���-�����ڴ����({})֮��ı��� 
//int a = 100;
////int global = 2020;
//void test()
//{
//	printf("test()--%d\n",global);
//}
//int main()
//{
//	test();
///	printf("%d\n",global);
//	return 0;
//}


		
	//int a = 10;
	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ-���ײ�����ᣬ����bug
	// ���ֲ�������ȫ�ֱ�����������ͬ��ʱ�򣬾ֲ��������� 
//	printf("%d\n",a);
  
//	int num1=10;//�ֲ�����-�����ڴ����({})�ڲ� 
	//����
	//20
//	short age = 20;//���ڴ�����2���ֽ�=16��bitλ���������20 
//	float weight = 95.6f;//���ڴ�����4���ֽڴ��weight 
	
//	printf("%d\n",sizeof(char));//1
//	printf("%d\n",sizeof(short));//2
///	printf("%d\n",sizeof(int));//4
//	printf("%d\n",sizeof(long));//4
//	printf("%d\n",sizeof(long long));//8
///	printf("%d\n",sizeof(float));//4
//	printf("%d\n",sizeof(double));//8
	
//	short int age=20//��int age����ʡ�ռ�	

//int main ������ 
//{
	//�����������
	//����Ļ�����helloworld
	//����-print function -printf-��ӡ���� 
	//�⺯��-C���Ա����ṩ������ʹ�õĺ���
	//���˵Ķ���-���к�
	//��#include
	//printf("hello world\n");
//	return 0;
//}

//int�����͵���˼
//mainǰ���int��ʾmain�������÷���һ������ֵ 
//int main()
//{
//	
//	return 0;//���� 0
//}


//char-�ַ�����
//%d-��ӡ����
//%c-��ӡ�ַ�
//%f-��ӡ����С��-��С��
//%p-��ӡ �Ե�ַ����ʽ��ӡ 
//%x-��ӡ16�������� 
//int main()
//(
	//double d = 3.14;
//printf("%lf\n",d);
//	return 0;
//	float f=5.0;
//	printf("%f\n",f);
//	return 0;
	//long ������
	//long num = 100;
	//printf("%d\n",num) ;
	//return 0;
//	char ch ='A';//�ڴ�  ���ڴ�������һ��ռ��ch 
//	printf("%c\n",ch);//%c--��ӡ�ַ���ʽ������ 
//short int-������
//long int������ 
   // int age = 20;
   // printf("%d\n",age);//%d--��ӡ����ʮ�������� 
//	return 0;

//}
