// #include <stdio.h>

// int main(void)
// {
//     printf("Hello World\n");
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     printf("%d\n", a + b);
//     return 0;
// }
// #include<stdio.h>

// int main(){
//     int a, b;
//     scanf("%d %d", &a, &b);
//     printf("%d\n",a-b);
//     return 0;
// }
// #include <stdio.h>

// int main(){
//     int a, b;
//     scanf("%d %d",&a, &b);
//     printf("%d\n",a*b);
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     double a, b;
//     scanf("%lf %lf", &a, &b);
//     printf("%0.12lf", a/b);
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d", &a, &b);
//     printf("%d\n%d\n%d\n%d\n%d\n", a+b, a-b, a*b, a/b, a%b);
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int y;
//     scanf("%d", &y);
//     printf("%d\n", y-543);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     scanf("%d %d %d", &a, &b, &c);
//     printf("%d\n%d\n%d\n%d\n", (a+b)%c, ((a%c)+(b%c))%c, (a*b)%c, ((a%c)*(b%c))%c);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int a, b;
//     scanf("%d %d", &a, &b);
//     printf("%d\n",a*(b%10));
//     printf("%d\n",a*(b%100/10));
//     printf("%d\n",a*(b/100));
//     printf("%d\n",a*b);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     long long a, b, c;
//     scanf("%lld %lld %lld", &a, &b, &c);
//     printf("%lld\n", a+b+c);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     printf("\\    /\\ \n");
//     printf(" )  ( ')\n");
//     printf("(  /  ) \n");
//     printf(" \\(__)| \n");
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     printf("|\\_/|\n");
//     printf("|q p|   /}\n");
//     printf("( 0 )\"\"\"\\ \n");
//     printf("|\"^\"`    |\n");
//     printf("||_/=\\\\__|\n");
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char ss[5] = "abcd";
//     char tt[5];
//     int i;

//     for(i=0; i<4; i++)
//     {
//         tt[i] = ss[3-i];
//     }

//     tt[4] = '\0';

//     printf("거꾸로 출력한 결과==> %s \n", tt);
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char ss[] = "XYZ";
//     int len;

//     len = strlen(ss);

//     printf("문자열 \"%s\"의 길이 ==> %d \n", ss, len);
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char ss[4];

//     strcpy(ss, "XYZ");

//     printf("문자열 ss의 내용 ==> %s \n", ss);
// }
#include <stdio.h>
int main()
{
    int aa[3][4];

    aa[0][0] = 1; aa[0][1] = 2; aa[0][2] = 3; aa[0][3] = 4;
    aa[1][0] = 5; aa[1][1] = 6; aa[1][2] = 7; aa[1][3] = 8;
    aa[2][0] = 9; aa[2][1] = 10; aa[2][2] = 11; aa[2][3] = 12;

    printf("aa[0][0]부터 aa[2][3]까지 출력\n");
    
    printf("%3d %3d %3d %3d\n", aa[0][0], aa[0][1], aa[0][2], aa[0][3]);
    printf("%3d %3d %3d %3d\n", aa[1][0], aa[1][1], aa[1][2], aa[1][3]);
    printf("%3d %3d %3d %3d\n", aa[2][0], aa[2][1], aa[2][2], aa[2][3]);
}

#include <stdio.h>
int main()
{
    int aa[3][4];
    int i,k;

    int val=1;

    for(i=0; i<3; i++)
    {
        for(k=0; k<4; k++)
        {
            aa[i][k] = val;
            val++;
        }
    }
    printf("aa[0][0]부터 aa[2][3]까지 출력\n");
    for(i=0; i<3; i++)
    {
        for(k=0; k<4; k++)
        {
            printf("%3d", aa[i][k]);
        }
        printf("\n");
    }
}   