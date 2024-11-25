#include <stdio.h>
int main(){
    int n,sum;
    printf("Nh?p s? nguyên d??ng b?t kì : ");
    scanf("%d",&n);
    for(int i =0; i<n;i++){
        // printf("%d",i);
        sum +=i;
    }
    printf("T?ng là là: %d",sum);
    return 0;
}
