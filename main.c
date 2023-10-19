#include <stdio.h>
#include <stdlib.h>

void f(void);

int i; //전역 변수로 설정 : #이 10개가 찍힐 것 
int main (int argc, char *argv[])
{
    //int i; (i를 지역변수로 설정  -> 10개의 #이 5번 반복되어 최종 50개 출력) 
    for (i=0; i<5; i++)
    {
        f();
    }
    system ("PAUSE");
    return 0;
}

void f (void)
{
     //int i; (i를 지역변수로 설정)
     for (i=0; i<10; i++)
         printf("#");
}


 
