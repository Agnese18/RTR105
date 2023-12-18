#include<stdio.h>
int main()
{
	int a, number_int,a_int, i_int, factorial_int;
    char number_char, a_char, i_char, factorial_char;
    long long number_long, a_long, i_long, factorial_long;
    
    factorial_int = 1;
	factorial_char = 1;
    factorial_long = 1;

    printf("izvelies datu tipu - ja char ievadi (1), ja int tad(2), ja longlong (3) \n");
	scanf("%d",&a);

	//printf("ievadi nummuru= \n");
	//scanf("%d",&number);

if (a==1){  //char tips
    printf("nummurs char_datu tipam ir =");
    scanf("%hhd",&number_char);
i_char = 1; 
    while (i_char <= number_char){ 
    
    //(i_char = 1; i_char <= number_char; ++i_char); 
 
        factorial_char *= i_char;
        printf("faktorials no %hhd = %hhd \n", number_char, factorial_char);
        ++i_char;
    }
    
    return 0;
    
}



if (a==2){  //int tips
    printf("nummurs char_datu tipam ir =%d \n", number_int);
    while 
}

if (a==3){  //long long tips
    printf("nummurs char_datu tipam ir =%lld \n", number_long);
    while 
}
}