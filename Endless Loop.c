#include <stdio.h>
#include <unistd.h>

int main() 
{
    int i = 1;
    for (;;) //high-speed for loop
    {
        printf("%d \n", i);
        fflush(stdout); //Flushes output immedeatly
        i++;
        if(i > 30){i = 1;}
        //usleep(1000000); //This slows down the loop, waits 1 second for each iteration, turn it on if you want to slow down the loop
    }
}
