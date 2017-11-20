#!/usr/bin/env python
# -*- coding: utf-8 -*-

def taylor(term, inp, seq):
    sum = seq
    for t in range(1,term):
        seq *= inp/t # recursion
        sum += seq
    return sum

if __name__ == '__main__':
    # init
    seq = 1.0
    inp = float(input('input: '))
    num = int(input('num of term: '))
    result = taylor(num, inp, seq)
    print(result)