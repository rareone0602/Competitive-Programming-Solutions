#include<iostream>
#include <string>
using namespace std;


int main(){
    string x;
    string y="``";
    string z="''";
    bool shut=true;
    while(getline(cin,x)){
        for(size_t i=0;i<x.length();i++){
            if(x[i]=='"'){
                if(shut){
                    x.erase(i,1);
                    x.insert(i,y);
                    shut=false;
                }
                else{
                    x.erase(i,1);
                    x.insert(i,z);
                    shut=true;
                }
            }
        }
        cout<<x<<endl;
    }
}