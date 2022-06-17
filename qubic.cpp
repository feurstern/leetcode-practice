#include<iostream>

using namespace std;


void calculatedCubic(int n){

    for(int i=0;i<n;i++){
        cout<<"\n"<<i;

        for(int j=i;j<n;j++){
            cout<<"\n"<<j;
        }
    }

}


int main(){
    calculatedCubic(10);
    
    return EXIT_SUCCESS;
}