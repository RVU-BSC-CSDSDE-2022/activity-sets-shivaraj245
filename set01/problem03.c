#include<stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);
int main(){
int a=input();
int  b=input();
int sum= add(a,b);
output(a,b,sum);
return 0;
}
int input(int nm)
{
    int num;
    printf("entre number");
    scanf("%d", &num);
    return num;
    }
int add(int a, int b)
{
    return a+b;

}
void output(int a, int b, int sum){
    printf("sum of %dand %d is %d ",a,b,sum);
}
