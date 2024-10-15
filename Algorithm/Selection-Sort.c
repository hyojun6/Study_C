#include <stdio.h> //선택정렬

int main() {
    int i,j,n=4,k,temp;
    int list[4]={4,5,1,2};
    for(i=n; i>=0; i--) {
        k=i;
        for(j=i-1; j>=0; j--)
            if(list[j]>list[k])
                k=j;
        temp=list[i];
        list[i]=list[k];
        list[k]=temp;
    }
    for(i=0; i<n; i++)
        printf("%d ",list[i]);
    return 0;
}