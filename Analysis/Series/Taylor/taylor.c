#include <stdio.h>

double taylor(int items, double seq, double input){
    double sum;
    sum = seq;
    for (int i = 1; i < items; i++){
        seq *= input/i; //recursion
        sum += seq;
    }
    return sum;
}