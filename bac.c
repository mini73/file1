// #include <stdio.h>
// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);

//     if(a < b)
//     {
//         printf("<\n");
//     }
//     else if(a > b)
//     {
//         printf(">\n");
//     }
//     else
//     {
//         printf("==\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int grade;
//     scanf("%d", &grade);

//     if(grade >= 90&& grade <= 100)
//     {
//         printf("A\n");
//     }
//     else if(grade >= 80 && grade <= 89)
//     {
//         printf("B\n");
//     }
//     else if(grade >= 70 && grade <= 79)
//     {
//         printf("C\n");
//     }
//     else if(grade >= 60 && grade <= 69)
//     {
//         printf("D\n");
//     }
//     else {
//         printf("F\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int year;
//     scanf("%d", &year);
//     if(year%4==0){
//         printf("1\n");
//     }
//     else{
//         printf("0\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int x, y;
//     scanf("%d %d", &x, &y);

//     if(x>0&&y>0){
//         printf("1");
//     }
//     else if(x<0&&y>0){
//         printf("2");
//     }
//     else if(x>0&&y<0){
//         printf("3");
//     }
//     else{
//         printf("4");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int h, m;
//     scanf("%d %d", &h, &m);

//     if(m>=45){
//         m -= 45;
//         printf("%d %d\n", h, m);
//     }
//     else{
//         m += 15;
//         if(h == 0){
//             h = 23;
//         }
//         else{
//             h -= 1;
//         }
//         printf("%d %d\n", h, m);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int h, m, t;
//     scanf("%d %d %d", &h, &m, &t);

//     h += t / 60;
//     m += t % 60;
    
//     if(m >= 60){
//         h += 1;
//         m -= 60;
//     }
//     if(h >= 24){
//         h -= 24;
//     }
//     printf("%d %d", h, m);

//     return 0;
// }
// 
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for(int i = 1; i < 10; i++){
//         printf("%d*%d=%d", n, i, n*i);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     int answer = 0;
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++)
//     {
//        answer = answer+ i;
//     }
//      printf("%d", answer);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int mon, count, a, b;
//     int sum = 0;

//     scanf("%d %d", mon, count);

//     for(int i =0; i<=count; i++){
//         scanf("%d %d", a, b);
//         sum += a*b;
//         }
//     if(sum == mon){
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int n;

//     scanf("%d", &n);

//     for(int i = 0;i<=n;i++){
//         for(int j=0; j<=i; j++){
//             printf("*");
//         }
//         return 0;
//     }

// }
#include<stdio.h>
int main(){
    char word[100];
    char num;
    int single, round, heart;


    printf("입력>>\n");
    scanf("%s",word);

    round = 0;
    num = word[round];

    while (num != '\0'){
        heart = num - '0';
        single = 0;
        while(single < heart){
            printf("\u2661");
            single++;
        }
        printf("\n");
        round++;
        num = word[round];
    }
    return 0;
}