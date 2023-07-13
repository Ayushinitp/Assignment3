//1

// #include <stdio.h>
// int main(){
    
//    printf("Output is %d" ,sizeof('a'));
// return 0;
// }


//2

// #include <stdio.h>
//  int main(){
//     printf("Output is %d",sizeof(3.4));
//     return 0;
//  }


//3

// #include <stdio.h>
// int main(){
//     char st;
//     printf("Enter a character : ");
//     scanf("%c",&st);
//     int x=("%d",st);
//     x++;
//     printf("Output is %c",x);
//     return 0;
    
// }



//4

// #include <stdio.h>
//  int main(){
//     int a;
//     printf("Enter a number : ");
//     scanf("%d",&a);
//     printf("Output is %d",a%10);
//     return 0;
//  }



//5

// #include <stdio.h>
//  int main(){
//     int a;
//     printf("Enter a number : ");
//     scanf("%d",&a);
//     printf("Output is %d",a/10);
//     return 0;
//  }




//6

// #include <stdio.h>
//  int main(){
//     int a,b,t;
//     printf("Enter two numbers : ");
//     scanf("%d%d",&a,&b);
//      printf("without swapping a== %d , b==%d\n",a,b);
//     t=a;
//     a=b;
//     b=t;
//     printf("after swapping a== %d , b==%d",a,b);
//     return 0;
//  }




//7

#include <stdio.h>
 int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a==%d , b==%d",a,b);
    return 0;
 }