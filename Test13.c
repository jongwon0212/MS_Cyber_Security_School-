#include <stdio.h>
#include <string.h>
char *title[] = { "번호","이름", "국어","영어", "수학" };
char *name[] = { "박길석","박길은","박길혜","임길혁","이길빈" };
int kor[] = { 10, 20, 30, 40, 50};
int eng[] = { 60, 70, 80, 90, 80};
int mat[] = { 70, 60, 50, 40, 30};
void swap(int *i, int *j);   //swap 함수 prototype
//
//  t13[<번호>]
//     번호에 해당하는 학생의 이름과 국영수 성적을 화면에 출력
//     <default> All
int main(int n, char *s[])    //CLI : Command Line Interface
{
    int start = 0, end = 5;
    if(n > 1)    // "1" "2"
    {
    if(strcmp(s[1], "--help") == 0) // '--help'
    {printf("\n\n t13 [<번호>] [<--help>]\n");
    printf(" 번호에 해당하는 학생의 이름과 국영수 성적을 화면에 출력합니다\n");
    printf(" <default> All  \n\n\n ");
    exit(1);
     }
    start =  atoi(s[1]) -1;       //s[1][0] -'0' - 1;  // 문자 '1' '2' '3' '4' ==> 0,1,2,3
    end = start + 1;
    }
  for(int i = start; i < end; i++)
  {
       if(i==start)  // title line 출력 
    
      {
    for(int j=0; j<5; j++)
             printf("%s  ", title[j]);
           printf("\n");
  }
      printf("%2d   %s  %3d  %3d  %3d\n" , i+1, name[i], kor[i], eng[i], mat[i]);
  
  }
  
  /*int i = 10, j = 20, k;
  printf("(before)    i : %d      j : %d\n", i, j);
  swap(&i,&j);
  printf("(after)     i : %d      j : %d\n", i, j);
}
  
void swap(int *i, int *j)
{
 int k;
 printf("(before)    i : %d      j : %d\n", *i, *j);
 k = *i; *i = *j; *j = k;
 printf("(after)     i : %d      j : %d\n", *i, *j);
 */
}
