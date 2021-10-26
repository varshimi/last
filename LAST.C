#include<stdio.h>
#include<conio.h>
int add();
int sub();
int user_input1;
int user_input2;
int option,temp;
void main()
{
clrscr();
     printf("enter 1 for add , 2 for sub:");
     scanf("%d",&option);
     printf("\n enter two number:");
     scanf("%d%d",&user_input1,&user_input2);
     //printf("%d",option);
//******************<----if condition---->**********************
	if(option==1)
	{
	 temp=add(user_input1,user_input2);
	 printf("the result is %d",temp);
	}
	if (option==2)
	{
	  temp=sub(user_input1,user_input2);
	  printf("the result is %d",temp);
	}
	else
	{
	  printf("invalid input");
	}
//**************************<----end---->************************
getch();
}
//********************<----function define---->****************
int add(int a, int b)
{
return a+b;
}
 int sub(int a,int b)
{
return a-b;
}
