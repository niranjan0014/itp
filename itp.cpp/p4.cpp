#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b=0,o=0,j,n=0,m=0;
    cout<<"enter a number";
    cin >>a;
    for(int i=a; i>0;i/=2){
        j=i%2;
        if(j==0){
            b=b/10;
        }

        else{ b=b/10+j;}
        n++;
    }
    for(int i=a; i>0;i/=8){
        j=i%8;
        o=j*10+o;
        m++;
    }
    b=b*pow(10,n);
    o=o*pow(10,m);
    cout<<a<<"in  binary form is "<<b<<endl;
    cout<<a<<"in octal form is "<<o<<endl;



    return 0;
    

 

}