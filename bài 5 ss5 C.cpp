#include<stdio.h>
int main(){
    for (int i=1;i<10;i++){
        printf("B?ng c?u chuong c?a %d \n",i);
        for(int n=1;n<=10;n++){
            printf("%d x %d = %d \n",i,n,n*i);
        }
    }
    return 0;
}
