/*
Functions in C
Objective
In this challenge, you will learn simple usage of functions in C. Functions are a bunch of statements glued
together. A function is provided with zero or more arguments, and it executes the statements on it. Based
on the return type, it either returns nothing (void) or something.
A sample syntax for a function is
return_type function_name(arg_type_1 arg_1, arg_type_2 arg_2, ...) {
...
...
...
[if return_type is non void]
return something of type `return_type`;
}
For example, a function to read four variables and return the sum of them can be written as
int sum_of_four(int a, int b, int c, int d) {
int sum = 0;
sum += a;
sum += b;
sum += c;
sum += d;
return sum;
}
Task
You have to write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and
returns the greatest of them.
+= : Add and assignment operator. It adds the right operand to the left operand and assigns the result to the left operand.
a += b is equivalent to a = a + b;
Input Format
Input will contain four integers - , one in each line.
Output Format
Print the greatest of the four integers.
Note: I/O will be automatically handled.
Sample Input
3
4
6
5
Sample Output
6*/

#include <stdio.h>
int max;
 int max_of_four(int a, int b, int c, int d)
 {
    if(a > b){
        if(a > c){
            if(a>d)return a;
            else return d;
        }
        else {
            if(c > d)return c;
            else return d;
        }
    }
    else{
        if(b > c){
            if(b > d)return b;
            else return d;
        }
        else{
            if(c > d)return c;
            else return d;
        }
    }
 }
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
