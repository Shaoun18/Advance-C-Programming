#include<iostream>
using namespace std;
int main(){
int cases;
cin>>cases;
if (cases < 1 || cases >20){
    return 0;
}

int nodes;

for(int i=1 ; i <cases + 1 ; i++){
        cout<< "Case "<<i<< ":" <<endl;
        cin>> nodes;

if(2 >= nodes || nodes >= 100000){
    break;
}
    for(int j = 0 ; j < nodes -1; j++){
        int p,q;
    cin >> p>>q;
    if(p>nodes || q > nodes){
        break;
    }
    int s = nodes-1;
    if(q == s ){
        cout<< p << " " << q <<endl;
    }
    else{
        cout<< q << " "<<p<<endl;
    }
    }
}
return 0;
}
