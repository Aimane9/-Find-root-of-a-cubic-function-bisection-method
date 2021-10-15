#include<iostream>
#include "stdint.h"
using namespace std;
 
   
int main() {
    int x=0x5555;
    int y=0x1234;
    int w=sizeof(x)<<3;
    int v=sizeof(x)<<3;
    
    
    int a=(x & 0xFF);
    int b=(x>>w-(w/(sizeof(int))));
    int c=(b<<w-(w/(sizeof(int))));
    int d=(y>>w-3*(v/(sizeof(int))));
    int e=(d<<w-3*(v/(sizeof(int))))|0;
    
    int f=(e) & 0x00FFFFFF ;     
     
   
    cout<<std::hex<<a<<endl;
      cout<<std::hex<<b<<endl;
      cout<<std::hex<<c<<endl;
      cout<<std::hex<<d<<endl;
      cout<<std::hex<<e<<endl;
     cout<<std::hex<<f<<endl;
        cout<<std::hex<<(a|c|f)<<endl;
      return 0;
}
