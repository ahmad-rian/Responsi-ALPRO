#include <bits/stdc++.h>
using namespace std;

int prima(int N){
    int tmp=0;
    for(int i=1;i<=N;i++){
        if(N%i==0) tmp++;
    }
    return tmp;
}

void bagi(int p,int q, int r){
    vector<int> vec;
    for(int i=2;i<=100;i++){
        if(((i%p) != 0)&&((i%q)!=0)&&((i%r)!=0)) vec.push_back(i);
    }
    
    for(int i=0;i<6;i++){
        cout<<vec[i]<<" ";
    }
   
}

int main()
{
   int a,b,c;
   vector<int> vec;
   int x,y,z;
   cin>>a>>b>>c;
   
   x= prima(a);
   y=prima(b);
   z= prima(c);
   
   if((x!=2)||(y!=2)||(z!=2)) cout<<"Tidak semua bilangan adalah prima!";
   else if((x==2)&&(y==2)&&(z==2)) bagi(a,b,c);
   
}