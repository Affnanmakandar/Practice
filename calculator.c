#include <stdio.h>

int main() {
int a, b,c;
printf("enter the value of a:\n");
scanf("%d",&a);
printf("enter the value of b:\n");
scanf("%d",&b);
printf("choose any option:\n1]a+b \n2]a-b \n3]a*b \n4]a/b\n ");
scanf("%d",&c);
switch(c){
    case 1:
    printf("%d\n",a+b);
    break;
    case 2:
    printf("%d",a-b);
    break;
    case 3:
    printf("%d",a*b);
    break;
    case 4:
    printf("%d",a/b);
    break;

}



    return 0;
}