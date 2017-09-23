//
//  main.c
//  Fibonaccis
//
//  Created by Emanuele Antonio Faraone on 23/09/17.
//  Copyright © 2017 Emanuele Antonio Faraone. All rights reserved.
//
#include <stdio.h>
int main() {
    int prec1 = 1; // first number
    int prec2 = 1; // second number
    int r , i ; // r: result
    for (i= 0 ; i < 44 ; i += 1){
        r = prec1 + prec2;
        printf("\n" "%d", r);
        prec1 = prec2 ;
        prec2 = r;
    }
}
