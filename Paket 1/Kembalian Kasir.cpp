#include <stdio.h>
#define ll long long
void konversi(ll a){
 if(a==0) printf("UANG PAS");
 else{
 while(a!=0){
 if(a>=100000){
 printf("%d\n",100000);
 a= a - 100000;
 }else if((a>=50000)&&(a<100000)){
 printf("%d\n",50000);
 a = a - 50000;
 }else if((a>=20000)&&(a<50000)){
 printf("%d\n",20000);
 a = a - 20000;
 }else if((a>=10000)&&(a<20000)){
 printf("%d\n",10000);
 a = a - 10000;
 }else if((a>=5000)&&(a<10000)){
 printf("%d\n",5000);
 a = a - 5000;
 }else if((a>=2000)&&(a<5000)){
 printf("%d\n",2000);
 a = a - 2000;
 }else if((a>=1000)&&(a<2000)){
 printf("%d\n",1000);
 a = a - 1000;
 }else if((a>=500)&&(a<1000)){
 printf("%d\n",500);
 a = a - 500;
 }
 }
 }
}
int main(){
 ll P, Q ,hasil;
 printf("=====PEMROGRAMAN KASIR REDJA MULYA=====\n");
 printf("MASUKAN UANG PELANGGAN : ");
 scanf("%lld",&P);
 printf("MASUKKAN HARGA BELANJAAN : ");
 scanf("%lld",&Q);
 
 hasil = P - Q;
 
 konversi(hasil);
}