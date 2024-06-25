#include <stdio.h>
int main()
{
    int n1,n2,rst;
    while(1){
        rst=scanf("%d %d", &n1,&n2);
        if(rst==2){
            printf("%d\n",n1+n2);
        }
        else break;
    }
    return 0;
}