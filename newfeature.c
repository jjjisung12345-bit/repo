#include <stdio.h>
#include <unistd.h>
void main(){
 //need to print current working dir
 //develop
  char pwd[1024];
  getcwd(pwd, sizeof(pwd));
  printf("%s\n", pwd);
}
