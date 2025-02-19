#include <stdio.h>
#include <unistd.h>

int main() 
{
    int i = 1;
    for (;;)
    {
        printf("%d \n", i);
        fflush(stdout);
        i++;
        if(i > 30){i = 1;}
        usleep(1000000); 
    }
}
