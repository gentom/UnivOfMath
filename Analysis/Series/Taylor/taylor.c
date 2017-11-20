#include <stdio.h>

double taylor(int term, double seq, double input){
    double sum;
    sum = seq;
    for (int t = 1; t < term; t++){
        seq *= input/t; //recursion
        sum += seq;
    }
    return sum;
}