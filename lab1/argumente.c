#include<stdio.h>
#include<stdlib.h>

int main(int argc,char **argv){
  if(argc<5){
    printf("ARGUMENTE PREA PUTINE");
    exit(-1);
  }
  if(argc>5){
    printf("ARGUMENTE PREA MULTE");
    exit(-1);
  }
  return 0;
}
