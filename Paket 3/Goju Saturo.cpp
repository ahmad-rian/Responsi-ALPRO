#include <iostream>
using namespace std;

int main(){
    int N,tmp=0;
    cin>>N;
    int arr[N][2];
    
    for(int i=0;i<N;i++) {
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    
    int a[N];
    for(int i=0;i<N;i++) a[i]=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<2;j++){
            a[i] = a[i] + arr[i][j];
        }
    }
    
    for(int i=0;i<N;i++){
        if((a[i]/2) < 75) tmp++;
    }
    
    cout<<tmp;
    
}