/*
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
}*/

#include <stdio.h>
int a1,b1;
void update(int *a,int *b) {
    a1= *a + *b;
    b1= *b - *a;
    if(b1<0)
        b1=b1*(-1);
}
int main() {
    int a,b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a1, b1);
    return 0;
}
