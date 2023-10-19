#include <stdio.h>
#include <stdlib.h>

int inc(int counter); //prototyping 

int main(int argc, char *argv[])
{
  int i = 10; 
  
  printf("함수 호출 전 i=%d\n", i);
  inc(i);
  //i = inc(i); //inc함수의 결과가 반영됨  
  printf("함수 호출 후 i=%d\n", i);
  
  system("PAUSE");	
  return 0;
}

int inc(int counter)
{
    counter++;
    return counter;
}

 
