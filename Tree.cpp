#include<stdio.h>
//(while语句)
int main()
{
	int ch=0;
	while(ch=getchar())!=EOF)
	{
		putchar(ch);
	}
	return 0;
}


/* 
int main()
{
	int i=1;
	while(i<=10)
	{
		if(i==5)
			continue ;//终止本次循环，本次循环中continue后边的代码不会再执行
						//而是直接跳转到while语句的循环部分，进行下一次循环的入口判断 
		printf("%d ",i);
		i++;
	}

	return 0;
}*/ 



/*int main()
{
	int i=1;
	while(i<=1000000)
	{
		printf("%d ",i);
		i++;
	}

	return 0;
 } 
*/ 


/*(switch语句)
int main()
{
	int n=1;
	int m=2;
	switch(n)
	{
		case 1:m++;
		case 2:n++;
		case 3:
			switch(n)
			{
			case 1:n++;
			case 2:m++;n++;
			break;
			}
		case 4:m++;
			break;
		default:
			break;
	}
	printf("m=%d,n=%d\n",m,n);
	return 0;
}
*/ 




/*switch(整型表达式)
case（整型常量表达式）1+2 
int main()
{
	int day=0;
	scanf("%d",&day);
	switch(day)
	{
	case 1:
		printf("星期1\n");
		break;
	case 2:
		printf("星期2\n");
		break;
	case 3:
		printf("星期3\n");
		break;
	case 4:
		printf("星期4\n");
		break;
	case 5:
		printf("星期5\n");
		break;
	case 6:
		printf("星期6\n");
		break;
	case 7:
		printf("星期7\n");
		break;
	}
	 
	return 0;
}
*/
 
/*
int main()
{
	int day=0;
	int n=1;
	scanf("%d",&day);
	switch(day)
	{
	case 1:
		if(n=1);
			printf("小聪明\n");
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("小天才电话手表\n");
		break;
	}
	 
	return 0;
}
*/





/*(if语句) 
int main()
{
	/*
	int i=1;
	while(i<=100)
	{
		printf("%d ",i);
		i+=2;
	}
	return 0;*/
	
	
	
	/*
	while(i<=100)
	{
		if(i%2==1)
			printf("%d \n",i);
			i++;
	}
	return 0;*/
 

/*
int main()
{
	int num=4;
	if(4==num)
	{
		printf("呵呵\n");
	}
	
}
*/


/* 
int main()
{
	int a=0;
	int b=2;
	if(a==1)
		if(b==2)
			printf("hehe\n");
	else      //else和最近的if匹配
			printf("haha\n");
	return 0;
}
*/

/*
int main()
{
	int age=60;
	if(age<18)
		printf("未成年\n");
	else if(18<=age&&age<28)//&&
		printf("青年\n");
	else if(age>=28&&age<50)
		printf("壮年\n");
	else if(age>=50&&age<90)
		printf("老年\n");
	return 0;
}
*/



/*{
	int age=20;
	if(age<18)
		printf("未成年\n");
	else
		printf("成年\n");
	
	return 0;
}*/
