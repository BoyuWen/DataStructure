//
//  main.c
//  数据结构-1-K阶斐波那契数列
//
//  Created by 一语书生 on 16/9/19.
//  Copyright © 2016年 一语书生. All rights reserved.
//

#include <stdio.h>

int Fibonacci(int,int);

int main(void) {
    Fibonacci(k,m);
    return 0;
}

int Fibonacci(int k,int m){
    int i,j,fun,sum = 0,s[100];
    if (m <k) {
        fun = 0;
    }else if (m == k){
        fun = 1;
    }else{
        for (i=0; i<k-1; i++) {
            s[i] = 0;
        }
        s[k-1] = 1;
        for (i=k; i<m; i++) {
            sum = 0;
            for (j=i-1; j>=i-k; j--) {
                sum+=s[j];
            }
            s[i] = sum;
        }
        fun = sum;
    }
    return fun;
}
