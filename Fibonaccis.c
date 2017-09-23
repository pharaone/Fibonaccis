//
//  main.c
//  Fibonaccis 0.0.2
//
//  Created by Emanuele Antonio Faraone on 23/09/17.
//  Copyright © 2017 Emanuele Antonio Faraone. All rights reserved.
//
#include <stdio.h>
int main() {
    int prec1 = 1; // first number
    int prec2 = 1; // second number
    int r , i, howmanyt  = 0 ; // r: result, howmanyt : how many times to do the fibonacci
    printf("How many times do I have to do the Fibonacci?\n");
    scanf("%d" ,&howmanyt);
    for (i = 0; i <= howmanyt; i++){
        r = prec1 + prec2;
        printf("\n" "%d", r);
        prec1 = prec2 ;
        prec2 = r;
    }
}
