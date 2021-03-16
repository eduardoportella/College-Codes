#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void verde(){
    printf("\033[32m pocas ideia");
}

void vermelho(){
    system("color 4F");
}

int main(){
    verde();
    sleep(1);
    vermelho();
    sleep(1);
    verde();
    sleep(1);
    vermelho();
    sleep(1);
    verde();
    sleep(1);
    vermelho();
    sleep(1);

    system("pause");
    return 0;
}