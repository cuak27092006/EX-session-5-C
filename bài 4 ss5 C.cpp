#include<stdio.h>
int main(){
    int n;
    printf("Nh?p s? nguy�n b?t k� (1-10):");
    scanf("%d",&n);
    if (n <0 || n>10){
        printf("Nh?p s? nguy�n kh�ng h?p l?");
        return 1;
    }else{
        printf("b?ng c?u chuong c?a %d \n",n);
        for(int i=1;i<=10;i++){
            printf("%d x %d = %d \n",n,i,n*i);
        }
    }
    return 0;
}
