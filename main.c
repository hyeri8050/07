#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i; 
  
  for (i=0; i<5; i++)
  {
      int temp = 1;
      printf("temp = %d\n",  temp);
      temp ++;
  }

  system("PAUSE");	
  return 0;
}

/*
< temp = 1 temp = 2 temp = 3 temp = 4 temp 5를 출력하려면? >

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i; 
  
  for (i=0; i<5; i++)
  {
      static int temp = 1; //static으로 생존기간을 늘림
      printf("temp = %d\n",  temp);
      temp ++;
  }
  
 */ 
