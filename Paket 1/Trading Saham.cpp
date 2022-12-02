#include <stdio.h>
int N,hasil,tmp=0;
int max(int a[]){
 int max=0;
 for(int i=0;i<N;i++){
 if(max<a[i]) max=a[i];
 }
 return max;
}
int min(int a[]){
 int min=a[0];
 for(int i=0;i<N;i++){
 if(min>a[i]) min= a[i];
 }
 return min;
}
int main(){
 printf("=====TRADING SAHAM=====\n");
 printf("MASUKKAN JUMLAH HARI YANG SUDAH DIPREDIKSI:");
 scanf("%d",&N);
 int arr[N];
 
 for(int i=0;i<N;i++){
 scanf("%d",&arr[i]);
 }
 hasil = max(arr) - min(arr);
 
 for(int i =0;i<N;i++){
 if(hasil==arr[i]) tmp++;
 }
 if(tmp == 0) printf("%d",hasil);
 else printf("%d",0);
}
