#include <stdio.h> //버블정렬

int main() {
    int i,j,n=4,temp;
    int list[4]={4,5,1,2};

    for(i=1; i<n; i++) {
        for(j=n; j>=i; j--) {
            if(list[j]>list[j-1]) {
                temp=list[j];
                list[j]=list[j-1];
                list[j-1]=temp;
            }
        }
    }

    for(i=0; i<n; i++)
        printf("%d ",list[i]);
    return 0;
}