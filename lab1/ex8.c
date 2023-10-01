#include<stdio.h>
#include<stdlib.h>

int main(int argc,char **argv){
  if(argc!=4){
    printf("EROARE LA ARGUMENTE");
    exit(-1);
  }
  int suma=0;
  char *p=NULL;
  p=argv[1];
  int n1=atoi(p);
  p = argv[2];
  int n2=atoi(p);
  p = argv[3];
  int n3=atoi(p);
  suma = n1 + n2 + n3;
  printf("Suma este %d",suma);
  return 0;
}
