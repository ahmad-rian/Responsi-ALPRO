#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a,b,x,y;
    vector<int> vec;
    scanf("%d",&a);
    scanf("%d",&b);
    
    x = a & b;
    y = x;
    printf("Angka 1 & 2 :%d\n",x);
    if(x>0){
        while(x!=0){
        int p;
        p = x%2;
        vec.push_back(p);
        x/=2;
        }
    }else{
        printf("Angka Binary : 0000");
    }
    if(y>0){
        printf("Angka binary : ");
        for(int i=vec.size()-1;i>=0;i--){
        printf("%d",vec[i]);
        }   
    }
}