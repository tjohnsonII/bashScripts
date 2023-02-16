//
//  TimsHead.c
//  C_Review
//
//  Created by Timothy Johnson on 2/16/23.
//

#include "TimsHead.h"



void menu(void)
{
    int choice = 0;
    while(choice <= 4)
    {
        printf("%10s\n",TITLE);
        printf("%10s\n",NETPRG);
        printf("%10s\n", NETINFO);
        printf("%10s\n",MACINFO);
        printf("%s\n",GETOUT);
        printf("%s\n",PROMPT);
        
        scanf("%i", &choice);
        
        switch(choice)
        {
            case 1:
                networkCheck();
                break;
            case 2:
                netInfo();
                break;
            case 3:
                macInfo();
                break;
            case 4:
                getOut();
                break;
            default:
                printf("%10s\n",DEFAULT_PROMPT);
                break;
        }
        system("clear");
    }
}

void networkCheck(void)
{
    system("ping 127.0.0.1 -c 10");
    system("ping google.com -c 10");
}

void netInfo(void)
{
    system("ifconfig");
}

void macInfo(void)
{
    system("arp -a");
}

void getOut(void)
{
    exit(0);
}
