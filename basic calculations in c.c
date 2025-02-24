#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int a,b;
printf("Enter 1st number\n");
scanf("%d", &a);
printf("Enter 2nd number\n");
scanf("%d", &b);
printf("Here are the basic calculations given as follows \n summation %d\n difference %d\n multiplication %d\n division %f\n modulas %d\n", a+b, a-b, a*b, (float)a/b, a%b);
    system("pause");
return 0;
}
