#include <stdio.h>

int N,x=0;

int panjang(int a[]){
    for(int i=0;i<N;i++){
        int tmp=1;
        for(int j=i;j<N;j++){
            if(a[j]<a[j+1]){
                tmp++;
            }
            if(a[j]>a[j+1]) break;
        }
        if(tmp>x) x = tmp;
    }
    return x;
}

int main(){
   int hasil;
   scanf("%d",&N);
   int arr[N];
    
   for(int i=0;i<N;i++) scanf("%d",&arr[i]);
   
   hasil = panjang(arr);
   
   printf("%d",hasil);
}