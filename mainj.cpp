#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	unsigned y=8;
	for(un signed x=6;y-x>=0; x=(x+1)&0xff)
	cout<<x<<",";
	cout<<endl;
	return 0;
}
