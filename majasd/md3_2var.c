#include<stdio.h>
int main(){
    int seciba, a, b, c, result1, result2, result3;
    printf("izvelaties secibu kada skaitļi tiks sakartoti\n");
    printf("augošai ievadi 1 , bet dilstošai ievadi 0 =\n");
    scanf("%d", &seciba);

printf("ievadi skaitli a=\n");
scanf("%d", &a);
printf("ievadi skaitli b=\n");
scanf("%d", &b);
printf("ievadi skaitli c=\n");
scanf("%d", &c);

if (seciba==1){

if (a>b && a>c){
        printf(" %d\n", a);
if (b>c){
           printf(" %d\n",b);
           printf(" %d\n", c);
} else {
            printf(" %d\n", c);
           printf(" %d\n",b);
        }
    }
    if (b>a && b>c){
        printf(" %d\n", b);
        if (a>c){
            printf(" %d\n", a);
            printf(" %d\n", c);
        } else {
            printf(" %d\n", c);
            printf(" %d\n",a);
        }
    }
    if (c>a && c>b){
        printf(" %d\n", c);
        if(a>b){
            printf(" %d\n", a);
            printf(" %d\n", b);
        } else {
            printf(" %d\n", b);
            printf(" %d\n", a);
        }

}
}

if (seciba==0){

if (a<b && a<c){
        printf(" %d\n", a);
if (b<c){
           printf(" %d\n",b);
           printf(" %d\n", c);
} else {
            printf(" %d\n", c);
           printf(" %d\n",b);
        }
    }
    if (b<a && b<c){
        printf(" %d\n", b);
        if (a<c){
            printf(" %d\n", a);
            printf(" %d\n", c);
        } else {
            printf(" %d\n", c);
            printf(" %d\n",a);
        }
    }
    if (c<a && c<b){
        printf(" %d\n", c);
        if(a<b){
            printf(" %d\n", a);
            printf(" %d\n", b);
        } else {
            printf(" %d\n", b);
            printf(" %d\n", a);
        }

}
}
}
