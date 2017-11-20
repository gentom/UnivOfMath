#!/usr/bin/env python
# -*- coding: utf-8 -*-

def taylor(terms, inp, seq):
    sum = seq
    for i in range(terms):
        seq *= inp/i # recursion
        sum += seq
    return sum

if __name__ == '__main__':
    # init
    seq = 1.0
    inp = float(input('input: '))
    num = int(input('num of term: '))
    result = taylor(num, inp, seq)
    print(seq)