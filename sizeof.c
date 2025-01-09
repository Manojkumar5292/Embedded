#include<stdio.h>
#define SIZEOF(x) ({__typeof__(x)Y;((char*)(&Y+1)-(char*)(&Y));})

int main(){

    printf("%d\n",SIZEOF(long long));
    return 0;
}

