#include <stdio.h>
#include <stdlib.h>
void hello(int n);
int main(){
   int num;
   scanf("%d", &num);
   hello(num);
   return 0;
}
hello(int n){
   for (int i =0; i<n;i++){
    printf("hello");
    }
}
