#include <stdio.h>
#include <string.h>
int main(){
 int T,tmp=0;
 
 printf("=====PROGRAM BALANCE IMBALANCE BRACKET=====\n");
 printf("MASUKKAN JUMLAH BRACKET: ");
 scanf("%d",&T);
 char br[T];
 printf("MASUKKAN BRACKET YANG DI CEK: ");
 for(int i=0;i<T;i++){
 scanf("%s",&br[i]);
 }
 
 for(int i=0;i<T;i++){
 if(br[i]=='(') br[i]=')';
 if(br[i]=='[') br[i]=']';
 if(br[i]=='{') br[i]='}';
 if(br[i]==br[T-1-i]) tmp++; 
 }
 if(tmp ==2) tmp = tmp -1 ;
 if(tmp==(T/2)) printf("TRUE");
 else if(tmp==1) printf("TRUE");
 else printf("FALSE");
}