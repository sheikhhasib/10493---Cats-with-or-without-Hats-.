#include<stdio.h>
int main(){
    int n,m;
    while(scanf("%d %d",&n,&m)==2 && n && printf("%d %d ",n,m)){
        if(m==1 && n==1){
            puts("Multiple");
            continue;
        }
        if(n==1) puts("Impossible");
        else if((m-1)%(n-1)){
            puts("Impossible");
        }
        else
            printf("%d\n",(m-1)/(n-1)+m);
    }
    return  0;
}
