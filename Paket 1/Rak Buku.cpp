#include <stdio.h>
#define ll long long
ll faktorial(int a){
 ll jml=1;
 for(int i=1;i<=a;i++){
 jml = jml * i;
 }
 return jml;
}
int main(){
 int N,M,result;
 ll hasil=1;
 
 printf("=====PEMROGRAMAN RAK BUKU=====\n");
 printf("MASUKKAN JUMLAH BUKU :");
 scanf("%d",&N);
 printf("MASUKKAN BERAPA JENIS BUKU :");
 scanf("%d",&M);
 
 while(M!=0){
 int temp;
 scanf("%d",&temp);
 hasil = hasil * faktorial(temp);
 M--;
 }
 result = faktorial(N)/hasil;
 printf("%d",result);
}
