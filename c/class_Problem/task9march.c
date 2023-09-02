// #include<stdio.h>
// int main()
// {
//     static int i=5;
//     if(--i)
//     {
//         main();
//         printf("%d ",i);
//     }
    
//     return 0;
// }

    
    
// #include<stdio.h>
// int main()
// {
//     int x=10;
//     static int y=10;

//     if( x==y )
//         printf("Equal");
//     else if(x>y) 
//         printf("Greater ");
//     else
//         printf("Less");
//     return 0;
// }

// #include<stdio.h>
// int f(int n)
// {
//     static int i=1;
//     if (n>=5)
//         return n;

//     i++;
//     return f(n);
// }
// int main()
// {
//     int k=f(1);
//     printf("%d",k);

// }

#include<stdio.h>
int sum(int x)
{
    
    if (x>100)
    {
        
        return 0;
    }
    
    else {
        return x+sum(x + 2);
    }
}
int main()
{
    int x=2;
    int s=sum(x);
    printf("The sum of all even numbers till 100 is %d\n", s);
    
    return 0;
    
}


// #include <stdio.h>

// int sum_of_evens(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     else if (n % 2 == 0) {
//         return n + sum_of_evens(n - 2);
//     }
//     else {
//         return sum_of_evens(n - 1);
//     }
// }

// int main() {
//     int n = 100;
//     int sum = sum_of_evens(n);
//     printf("The sum of all even numbers till %d is %d\n", n, sum);
//     return 0;
// }
