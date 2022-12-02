#include <iostream>
using namespace std;

int N;

int min(int *a){
    int tmp;
    tmp = a[0];
    
    for(int i=0;i<N;i++){
        if(tmp>a[i]) tmp = a[i];
    }
    return tmp;
}

int main(){
    int hasil;
    int *R =new int(N);
    int *M =new int(N);
    scanf("%d",&N);
    
    for(int i=0;i<N;i++) scanf("%d",&R[i]);
    for(int i=0;i<N;i++) scanf("%d",&M[i]);
    
    for(int i=0;i<N;i++){
        R[i] = R[i] + M[i];
    }
    
    hasil = min(R);
    
    for(int i=0;i<N;i++){
        if(hasil == R[i]) cout<<(i+1) ;
    }
}