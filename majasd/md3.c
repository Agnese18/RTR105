#include<stdio.h>
int main(){
    int a, b, c;
printf("ievadi skaitli a=");
scanf("%d\n", &a);
printf("ievadi skaitli b=");
scanf("%d\n", &b);
printf("ievadi skaitli c=");
scanf("%d\n", &c);

if (a>b && a>c){
        int result1 = a;
        if (b>c){
            int result2 = b;
            int result3 = c;
        } else {
            int result2 = c;
            int result3 = b;
        }
    }
    if (b>a && b>c){
        int result1 = b;
        if (a>c){
            int result2 = a;
            int result3 = c;
        } else {
            int result2 = c;
            int result3 = a;
        }
    }
    if (c>a && c>b){
        int result1 = c;
        if(a>b){
            int result2 = a;
            int result3 = b;
        } else {
            int result2 = b;
            int result3 = a;
        }

}
}