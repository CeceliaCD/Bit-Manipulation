#include <stdio.h>
#include <stdlib.h>


unsigned short get(unsigned short x, int n){

  unsigned short new;
  new= (x>>n) & 1;

  return new;
}

int main(int argc, char *argv[]){

  unsigned short num;
  unsigned short i;
  unsigned short m;

  num= atoi(argv[1]);

  int j= 15;
  int k;
  for(k=0; k<j; k++){
    i= get(num, k);
    m= get(num, j);
    if(i != m){
      printf("Not-Palindrome\n");
      return 0;
    }else if(i == m){
      j--;
    }
  }
  printf("Is-Palindrome\n");
  return 0;
}

