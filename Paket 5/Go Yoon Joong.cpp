#include <stdio.h>

void sort(int a[]){
    int tmp;
      for (int i = 0; i < 10; ++i){
        for (int j = i + 1; j < 10; ++j){
            if (a[i] > a[j]){
                tmp= a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main(){
    int arr[10],tmp=0,x;
    int y;
    for(int i=0;i<10;i++) scanf("%d",&arr[i]);
    scanf("%d",&y);
    
    sort(arr);
    printf("Data nilai ujian setelah di urutkan adalah\n");
    for(int i=0;i<10;i++) printf("%d ",arr[i]);
    printf("\n\n");
    
    for(int i=0;i<10;i++){
        if(y ==arr[i]) {
            tmp++;
            x = i;
        }
    }
    
    if(tmp==1) {
        printf("Nilai[%d] berada pada urutan array ke-",y);
        printf("%d",x);
    }else{
        printf("Nilai[%d] tidak ditemukan",y);
    }
}