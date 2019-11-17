#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//recitation
//once you see parentheses around registers know that you are working with addresses now
//indirect means addressing

unsigned short get(unsigned short x, int n){

unsigned short new; 
new= (x>>n) & 1;

return new;
}

unsigned short set(unsigned short x, int n, int v){

unsigned short new;
unsigned short i= get(x,n);

if(v == 1 && i==0){
return new= (v<<n) | x;
}else if(v == 0){
return new= (v<<n) & x;
}
}

unsigned short comp(unsigned short x, int n){

unsigned short i = get(x,n);

if(i== 1){
return set(x,n, 0);
}
return set(x,n,1);

}

int main(int argc, char *argv[]){

FILE *fp;

fp= fopen(argv[1], "r");

if(fp == NULL){
return 1;
}

unsigned short num;
int n;
int v;
char str[5];
unsigned short result;

fscanf(fp,"%d", &num);


while(fscanf(fp,"%s\t%d\t%d\n", str, &n, &v)!=EOF){ 

if(strcmp(str,"get") == 0){
result= get(num,n);
printf("%d\n", result);
}else if(strcmp(str,"set") == 0){
result= set(num,n,v);
printf("%d\n", result);
}else if(strcmp(str, "comp") == 0){
result= comp(num,n);
printf("%d\n", result);
}

}

fclose(fp);
return 0;
}

