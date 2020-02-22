#include<stdio.h>

int main()
{
    int t,i, d1=0, d2=0;
    scanf("%d",&t);
    int arr[t*t];
    for (i=0;i<t*t;++i){
        scanf("%d", &arr[i]);

    }
    for (i=0;i<t*t;i+=(t+1)){
        d1= d1+arr[i];

    }
    for (i=t-1;i<(t*t)-1;i+=(t-1)){
        d2+=arr[i];

    }

    if(d1>d2)
        printf("%d", d1-d2);
    else
        printf("%d", d2-d1);

}
