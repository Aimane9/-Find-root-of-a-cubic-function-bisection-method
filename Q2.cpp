#include<iostream>
#include "stdint.h"
using namespace std;
 // -*- c++ -*_
#include <limits.h>              // for INT_MIN, etc

 

   
int main() {
	int x=0X0;
   cout<< !!((x && 0xFFFFFFF0) || (x && 0xFFFFFF00) || (x && 0xFFFFF000) || (x && 0xFFFF0000) || (x && 0xFFF00000) || (x && 0xFF000000) ||(x && 0xF0000000) ||(x && 0x00000000)) ;
        cout<< !!((x && 0xFFFFFFF0) && (x && 0xFFFFFF00) && (x && 0xFFFFF000) |&& (x && 0xFFFF0000) || (x && 0xFFF00000) || (x && 0xFF000000) ||(x && 0xF0000000) ||(x && 0x00000000)) ;

      return 0;
}
