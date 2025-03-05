#include<stdio.h>

 int main(){
     int i, S=0;
     for (i=1; i<=100; i++){
        if(i%2!=0){
            S=S+i;
        }
     }
     printf("%d", S);
    return 0;
 }

