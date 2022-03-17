#include<stdio.h>
#include<string.h>
struct Book
{
	char name[20];
	short price;
};

int main()
{
	struct Book b1={"C语言程序设计",55};
	strcpy(b1.name,"c++");
	printf("%s\n",b1.name);
	//struct Book*pb=&b1;
	//利用pb打印出我的书名和价格
	//. 操作符  结构体变量.成员
	//-> 结构体指针->成员 
	//printf("%s\n",(*pb).name);
	//printf("%d\n",(*pb).price);
	
	//printf("%s\n",pb->name);
	//printf("%d\n",pb->price);
	
	/*
	printf("书名:%s\n",b1.name);
	printf("价格:%d\n",b1.price);
	b1.price=15;
	printf("修改后价格:%d\n",b1.price);*/
	return 0;
}


//复杂对象-结构体-我们自己创造出来的一种类型 

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


/* //int*是一个变量 
int main()
{
	int a=10;
	int*p=&a;
	//printf("a=%d\n",a); 
	//有一种变量p 是用来存放地址的-指针变量
	*p=20;
	printf("a=%d\n",a);
	//*p解引用操作符/间接访问操作符 
	return 0;
	
	
 } 
*/



/* 
//#define定义的标识符常量
#define MAX 100
int main()
{
	int a=MAX;
	printf("MAX=%d\n",MAX);
	return 0;
}*/




/*
//static修饰函数函数的链接属性，外部链接属性》内部链接属性  
//static修饰局部变量，局部变量的生命周期边长 
//static修饰全局变量， 改变了变量的作用域--让静态的全局变量只能在自己所在的源文件内部使用
// 出了源文件就没法使用了
 
void test()
{
	static int a=1;//a一个静态的局部变量   
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
	//arr[4];[]下标引用操作符 
	int a=10;
	int b=20;
	int sum=Add(a,b);//函数引用操作符  
	
	return 0;
 } 
*/

/* 条件操作符   三木操作符   exp?exp2;exp3;
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




//逻辑或||   只要有一个为真就是真 
/*逻辑与 &&   必须全为真才是真 
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
//强制类型转换 
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
	//int b=++a;//前置++，先++，再使用 
	int b=--a;//前置--，先--，再使用 
	printf("a=%d b=%d\n",a,b);
	return 0;
}
*/



/* 
int main()
{
	int a=10;
	//int b=a++;//后置++，先使用，再++
	int b=a--;//后置--，先使用，再-- 
	printf("a=%d b=%d\n",a,b);
	return 0;
}
*/

/* 
int main()
{
	int a=0;//4个字节，32个比特位 
	int b=~a;//~按(二进制)位取反
	//只要是整数，内存中存储的都是二进制的补码 
	//正数——原码，反码，补码相同  
	//负数在内存中存储的时候，存储的是二进制的补码 
	//原码，反码， 补码
	//原码-- 直接按照正负写出的二进制序列
	// 反码--原码的符号位不变，其他位按位取反得到
	//补码--反码加一得到的 
	//原码取反为反码，反码+1位是补码  
	printf("%d\n",b); 
	return 0;
}*/




//包含一个叫stdio.h的文件
//std-标准standard input output 
//#define _CRT_SSECURE_NO_WARNINGS 1
 
//#include<stdio.h>

//int main()
//{
	//未声明的标识符
	//声明extern外部符号的 
//	extern int g_val; 
//	printf("g_val = %d\n",g_val);
//	return 0;
//}



//int num2=20;//全局变量-定义在代码块({})之外的变量 
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
	//局部变量和全局变量的名字建议不要相同-容易产生误会，产生bug
	// 当局部变量和全局变量的名字相同的时候，局部变量优先 
//	printf("%d\n",a);
  
//	int num1=10;//局部变量-定义在代码块({})内部 
	//年龄
	//20
//	short age = 20;//向内存申请2个字节=16个bit位，用来存放20 
//	float weight = 95.6f;//向内存申请4个字节存放weight 
	
//	printf("%d\n",sizeof(char));//1
//	printf("%d\n",sizeof(short));//2
///	printf("%d\n",sizeof(int));//4
//	printf("%d\n",sizeof(long));//4
//	printf("%d\n",sizeof(long long));//8
///	printf("%d\n",sizeof(float));//4
//	printf("%d\n",sizeof(double));//8
	
//	short int age=20//比int age更加省空间	

//int main 主函数 
//{
	//这里完成任务
	//在屏幕上输出helloworld
	//函数-print function -printf-打印函数 
	//库函数-C语言本身提供给我们使用的函数
	//别人的东西-打招呼
	//即#include
	//printf("hello world\n");
//	return 0;
//}

//int是整型的意思
//main前面的int表示main函数调用返回一个整型值 
//int main()
//{
//	
//	return 0;//返回 0
//}


//char-字符类型
//%d-打印整型
//%c-打印字符
//%f-打印浮点小数-打小数
//%p-打印 以地址的形式打印 
//%x-打印16进制数字 
//int main()
//(
	//double d = 3.14;
//printf("%lf\n",d);
//	return 0;
//	float f=5.0;
//	printf("%f\n",f);
//	return 0;
	//long 长整型
	//long num = 100;
	//printf("%d\n",num) ;
	//return 0;
//	char ch ='A';//内存  向内存申请了一块空间叫ch 
//	printf("%c\n",ch);//%c--打印字符格式的数据 
//short int-短整型
//long int长整型 
   // int age = 20;
   // printf("%d\n",age);//%d--打印整型十进制数据 
//	return 0;

//}
