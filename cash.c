#include <stdio.h>
#include <cs50.h>

int main(void)
{


    int ChangeReq;
    do
    {
       ChangeReq = get_int("How much change, in cents, is needed: ");
    }
    while(ChangeReq < 0);

    int i = 0;

    while(ChangeReq > 0)
        {
            if(ChangeReq - 25 >= 0)
             {
                ChangeReq = ChangeReq - 25;
             }
            else if(ChangeReq - 10 >= 0)
             {
                ChangeReq = ChangeReq - 10;
             }
             else if(ChangeReq - 5 >= 0)
             {
                ChangeReq = ChangeReq - 5;
             }
             else
             {
                ChangeReq = ChangeReq - 1;
             }
             i++;
        }
    printf("The minimum coins you can be given is: %d\n", i);
}
