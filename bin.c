// #include<stdio.h>

// int main()
// {
//     int bin;
//     int dig;
//     int result = 0;
//     int place = 1;
//     // int base;

//     printf("진수 입력: ");
//     scanf("%d", &bin);

//     for (; bin > 0; bin = bin / 10)
//     {
//         dig = bin % 10;

//         result = result + dig * place;
//         place = place * 2;
//     }
//     printf("10진수: %d\n", result);

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     char alp;
//     int dec;
//     int ans = 0;


//     printf("16진수를 입력하시오: ");

//     for(;;){
//          scanf("%c",&alp);

//     if(alp == '\n' || alp == '\0'){
//         break;
//     }

//     if(alp >= '0' && alp <= '9'){
//         dec = alp - '0';
//     }
//     else if(alp >= 'A' && alp <= 'F'){
//         dec = alp - 'A' + 10;
//     }
//     else if(alp >= 'a' && alp <= 'f'){
//         dec = alp - 'a' + 10;
//     }
//     else{
//         printf("잘못 입력했습니다");
//     }

//     ans = ans * 16 + dec;
   
//     }
// printf("%d\n",ans);

// return 0;

// }

// #include<stdio.h>
// int main()
// {
//     char alp;
//     int a;
//     int b=0;
//     int dec;

//     printf("16진수를 입력하시오: ");

//     for(;;){
//          scanf("%c %d",&alp, &dec);

//          b = b * dec + a;

//     if(alp == '\n' || alp == '\0'){
//         break;
//     }

//     if(alp>='0'&&alp<='9'){
//         alp = alp - '0';
//     }

//     else if(alp>='A'&&alp<='I'){
//         a = alp - 'A' + 10;
//     }
 

//     else if(alp>='J'&&alp<='S'){
//         a = alp - 'a' + 20;
//     }

//     else if(alp>='T'&&alp<='Z'){
//         a = alp - 'a' + 30;
//     }
  
//     else{
//         printf("잘못 입력했습니다");
//     }

//     }
// printf("%d\n",b);

// return 0;

// }

// #include<stdio.h>
// int main()
// {
//     char alp;
//     int dec;
//     int ans = 0;
//     int base;


//     printf("수와 진수를 입력하시오: ");

//     for(;;){
//          scanf("%c %d",&alp, &base);

//     if(alp == '\n' || alp == '\0'){
//         break;
//     }

//     if(alp >= '0' && alp <= '9'){
//         dec = alp - '0';
//     }
   
//     else if(alp>='A'&&alp<='I'){
//         dec = alp - 'A' + 10;
//     }

//     else if(alp>='J'&&alp<='S'){
//         dec = alp - 'A' + 20;
//     }

//     else if(alp>='T'&&alp<='Z'){
//         dec = alp - 'A' + 30;
//     }
    
//     else{
//         printf("잘못 입력했습니다");
//     }

//     ans = ans * base + dec;
   
//     }
// printf("%d\n",ans);

// return 0;

// }

// #include <stdio.h>

// int main() {
//     int compare, num;
//     int asc = 1;
//     int desc = 1;

//     scanf("%d", &compare);

//     for (int i = 1; i < 8; i++) {
//         scanf("%d", &num);

//     if (num == compare + 1)
//             asc++;

//         if (num == compare - 1)
//             desc++;

//         compare = num;
//     }

//     if (asc==8)
//         printf("ascending\n");
//     else if (desc==8)
//         printf("descending\n");
//     else
//         printf("mixed\n");

//     return 0;
// }
#include<stdio.h>
int main(){
    int a,b,c,d;
    int hap;

    printf("1번째 숫자를 입력하세요 : ");
    scanf("%d", &a);
    printf("2번째 숫자를 입력하세요 : ");
    scanf("%d", &b);
    printf("3번째 숫자를 입력하세요 : ");
    scanf("%d", &c);
    printf("4번째 숫자를 입력하세요 : ");
    scanf("%d", &d);
    
    hap = a+b+c+d;

    printf(" 합계 ==> %d \n", hap);
}

#include<stdio.h>
int main(){
    int aa[4];
    int hap;

    printf("1번째 숫자를 입력하세요 : ");
    scanf("%d", &aa[0]);
    printf("2번째 숫자를 입력하세요 : ");
    scanf("%d", &aa[1]);
    printf("3번째 숫자를 입력하세요 : ");
    scanf("%d", &aa[2]);
    printf("4번째 숫자를 입력하세요 : ");
    scanf("%d", &aa[3]);
    
    hap = aa[0]+aa[1]+aa[2]+aa[3];

    printf(" 합계 ==> %d \n", hap);
}

#include<stdio.h>
int main(){
    int aa[4];
    int hap=0;
    int i;

    for(i=0;i<=3;i++)
    {
        printf("%d번째 숫자를 입력하세요 : ",i+1);
        scanf("%d", &aa[i]);
    }
    
    
    hap = aa[0]+aa[1]+aa[2]+aa[3];

    printf(" 합계 ==> %d \n", hap);
}

#include<stdio.h>
int main(){
    int aa[4]={100,200,300,400};
    int bb[]={100,200,300,400};
    int cc[4]={100,200};
    int dd[4]={0};
    int i;

    for(i=0;i<=3;i++)
        printf("%d번째 숫자를 입력하세요 : ",i+1);
        scanf("%d", &aa[i]);
    
}