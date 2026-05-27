#include <stdio.h>
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 10;
    int y = 20;
    swap(x,y);
    printf("%d %d",x,y);
}

int main(){
    int number = 10;
    int *p;
    p = &number;
    printf("%d",p);
}

int main() {
    int a = 10;
    int *p;
    p = &a;
    *p = 30;
    printf("%d %d", *p,a);
}

int main(){
    char *pc;
    int *pi;
    double *pd;

    pc = (char *)10000;
    pi = (int *)10000;
    pd = (double *)10000;
    printf("증가 전 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
    pc++;
    pi++;
    pd++;
    printf("증가 후 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
}

int main(){
    int a =10;
    int *p;
    p = &a;
    printf("%d ", (*p)++);
    printf("%d ", ++*p);
    printf("%d ", *p++);
    printf("%d ", a);
    printf("%d ", *++p);
}

void modify(int *ptr){
    *ptr = 99;
}
int main(){
    int number = 1;
    modify(&number);
    printf("number = %d",number);
    return 0;
}

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int x = 10;
    int y = 20;
    swap(x,y);
    printf("%d %d",x, y);
}