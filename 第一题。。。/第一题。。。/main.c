//
//  main.c
//  第一题。。。
//
//  Created by pengju guo on 2021/7/9.
//
#include <stdio.h>
#define N 100
int func(int n,char*p){
    char*b=p;
    int count=0,i;
    /*循环计算化为1的步骤*/
    for(i=0;n>1;i++){
        /*判断能否被2整除*/
        if(n%2==0){
            n>>=1;
            b[i]='^';
        }
        else{
            if(n==3){
                n--;
                b[i]='-';}
            else{
                if(n&2){
                    n++;
                    b[i]='+';}
                else{
                    n--;
                    b[i]='-';}
            }
        }
        count++;
    }
    return count;
}
int main(){
    int n;
    char a[N]={0};
    printf("请输入正整数n\n");
    scanf("%d",&n);
    printf("最少次数为%d\n运算过程为%s\n",func(n,a),a);
    return 0;
}
