#include<stdio.h>
//#include<stdafx.h>

int main(void)
{
	int age, score;  // ���� ���� ����
	
	// scanf("���̰� ��� �Ǽ���?:%d",age);
	printf("���̰� ��� �Ǽ���?:"); scanf("%d",&age);
	 printf("�����¿�?:"); scanf("%d",&score);
	 
/*	printf("My age:%d\n"age);
	printf("%d is my point\n",score);
	printf("Good \nMorning \neverybody\n");*/
   
	printf("My age: %d \n%d is my point\nGood \nMorning \neverybody\n", age, score);
	
	return 0;
}
