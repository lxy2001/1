#include <iostream>
using namespace std;
int main (){
    int data[4][4];
    int a[4],b[4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>data[i][j];
        }
    }
    for(int i=0;i<4;i++){
        int p=0,sum=0,m=0;
        for(int j=0;j<4;j++){
            if(data[i][j]%2==0){
                m++;
                sum=sum+data[i][j];
            }
        }
        cout<<"line"<<i+1<<" = "<<m<<";"<<" sum = "<<sum<<'\n';
    }
    
    
    
    
    
    return 0;
}
