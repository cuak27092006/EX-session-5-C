#include <stdio.h>
int main(){
    int n,sum;
    printf("Nh?p s? nguy�n d??ng b?t k� : ");
    scanf("%d",&n);
    for(int i =0; i<n;i++){
        // printf("%d",i);
        sum +=i;
    }
    printf("T?ng l� l�: %d",sum);
    return 0;
}
