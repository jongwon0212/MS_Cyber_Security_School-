#include<stdio.h>
//#include<stdafx.h>

int main(void)
{
	int age, score;  // 정수 변수 선언문
	
	// scanf("나이가 어떻게 되세요?:%d",age);
	printf("나이가 어떻게 되세요?:"); scanf("%d",&age);
	 printf("점수는요?:"); scanf("%d",&score);
	 
/*	printf("My age:%d\n"age);
	printf("%d is my point\n",score);
	printf("Good \nMorning \neverybody\n");*/
   
	printf("My age: %d \n%d is my point\nGood \nMorning \neverybody\n", age, score);
	
	return 0;
}
