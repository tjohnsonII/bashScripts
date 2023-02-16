//
//  TimsHead.h
//  C_Review
//
//  Created by Timothy Johnson on 2/16/23.
//

#ifndef TimsHead_h
#define TimsHead_h

#include <stdio.h>
#include <stdlib.h>

#define TITLE "Tims C Network Info Program"
#define NETPRG "1 Network Check"
#define NETINFO "2 Network Info"
#define MACINFO "3 MAC Info"
#define GETOUT "4 Exit"
#define PROMPT "Enter a selection"
#define DEFAULT_PROMPT "Make a valid section"
#define AGAIN "Continue ?"

struct{
    int aNumber;
    void setANumber(int pANumber);
}

void menu(void);
void networkCheck(void);
void netInfo(void);
void macInfo(void);
void getOut(void);

#endif /* TimsHead_h */
