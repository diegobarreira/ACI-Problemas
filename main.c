/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: dbbarreira
 *
 * Created on 24 de marzo de 2017, 10:23
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    
    /*unsigned int ui=0xFFFF7F8F;
    unsigned short us = ui;
    unsigned char uc= us;
    int si=0xFFFF7F8F;
    short ss = si;
    signed char sc = ss;
    
    printf("%d, %d, %d\n",ui,us,uc);
    printf("%08x,%04x,%02x\n",ui,us,uc);
    
    printf("%d, %d, %d\n",si,ss,sc);
    printf("%08x,%04x,%02x\n",si,ss,sc);*/
    
   /* unsigned char uc1 = 0xFF;
    unsigned char uc2 = 0;
    
    if(uc1==uc2)
    {
        printf("%x = %x\n",~uc1,uc2);
    }else{
        printf("%x != %x \n",~uc1,uc2);
    }*/
    
    unsigned char uc1=0x01;
    signed char uc2=0x01;
    
    signed char sc3=(uc2<<-9);
    
    printf("%d, %d\n",(uc1<<7),(sc3<<7));
    printf("%x, %x\n",(uc1<<7),(sc3<<7));
    
    return (EXIT_SUCCESS);
}

