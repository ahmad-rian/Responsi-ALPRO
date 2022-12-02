#include <iostream>

using namespace std;

int main(){
    string a,b,c;
    int G,C,M,S;
    
    cin>>a>>G;
    cin>>b>>C;
    cin>>c>>M;
    
   if(G-C > 0) S = G - C;
   else S = C - G;
    cout<< S;
    if(((M>=(G - S))&&(M<=(G + S)))&&((M>=(C - S))&&(M<=(C + S)))){
        cout<<c<<" adalah anak dari "<<a<<" dan "<<b;
    }else if((M>=(G - S))&&(M<=(G + S))){
        cout<<c<<" adalah anak dari "<<a;
    }else if((M>=(C - S))&&(M<=(C + S))){
        cout<<c<<" adalah anak dari "<<b;
    }else{
        cout<<c<<" adalah anak angkat";
    }
}