#include <stdio.h>

double taylor(int terms, double seq, double input){
    double sum;
    sum = seq;
    for (int t = 1; t < terms; t++){
        seq *= input/t; //recursion
        sum += seq;
    }
    return sum;
}