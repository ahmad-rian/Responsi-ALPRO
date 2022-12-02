#include <iostream>
using namespace std;
int N,M;
void cek(int x[],int y[]){
    int p[N],tmp=0;
    for(int i=0;i<N;i++) p[i]=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if((x[i]==y[j])||(x[i]==(y[j+1]))) {
                p[i]++;
             }
            
        }
    }
    for(int i=0;i<N;i++){
        if(p[i]!=0) tmp++;
    }
    cout<<tmp;
}

int main()
{
    
    cin>>N>>M;
    int arr[N], a[M];
    
    for(int i=0;i<N;i++) cin>>arr[i];
    for(int i=0;i<M;i++) cin>> a[i];
    
    cek(arr,a);
}