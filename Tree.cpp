#include<stdio.h>
//(while���)
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
			continue ;//��ֹ����ѭ��������ѭ����continue��ߵĴ��벻����ִ��
						//����ֱ����ת��while����ѭ�����֣�������һ��ѭ��������ж� 
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


/*(switch���)
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




/*switch(���ͱ���ʽ)
case�����ͳ�������ʽ��1+2 
int main()
{
	int day=0;
	scanf("%d",&day);
	switch(day)
	{
	case 1:
		printf("����1\n");
		break;
	case 2:
		printf("����2\n");
		break;
	case 3:
		printf("����3\n");
		break;
	case 4:
		printf("����4\n");
		break;
	case 5:
		printf("����5\n");
		break;
	case 6:
		printf("����6\n");
		break;
	case 7:
		printf("����7\n");
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
			printf("С����\n");
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("С��ŵ绰�ֱ�\n");
		break;
	}
	 
	return 0;
}
*/





/*(if���) 
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
		printf("�Ǻ�\n");
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
	else      //else�������ifƥ��
			printf("haha\n");
	return 0;
}
*/

/*
int main()
{
	int age=60;
	if(age<18)
		printf("δ����\n");
	else if(18<=age&&age<28)//&&
		printf("����\n");
	else if(age>=28&&age<50)
		printf("׳��\n");
	else if(age>=50&&age<90)
		printf("����\n");
	return 0;
}
*/



/*{
	int age=20;
	if(age<18)
		printf("δ����\n");
	else
		printf("����\n");
	
	return 0;
}*/