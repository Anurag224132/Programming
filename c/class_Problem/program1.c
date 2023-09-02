// #include<stdio.h>
// char name(x)
// {
//    if (x<11)
//    {
//     return(name());
//    }
//    else
//    x=x+1;
//    return;
// }




// int main()
// {
//     int x=0;
//     char s;
//     printf("Enter your name ");
//     scanf("%s",&s);
//     char my=name(s);
//     printf("your result is %s",my);
// }

#include <stdio.h>

void printName(int count) {
    if (count == 0) { 
        return;
    }
    printf("Your name\n");
    printName(count - 1);
}

int main() {
    printName(10);
    return 0;
}
