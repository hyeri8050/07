#include <stdio.h>
#include <stdlib.h>

void f(void);

int i; //���� ������ ���� : #�� 10���� ���� �� 
int main (int argc, char *argv[])
{
    //int i; (i�� ���������� ����  -> 10���� #�� 5�� �ݺ��Ǿ� ���� 50�� ���) 
    for (i=0; i<5; i++)
    {
        f();
    }
    system ("PAUSE");
    return 0;
}

void f (void)
{
     //int i; (i�� ���������� ����)
     for (i=0; i<10; i++)
         printf("#");
}


 
