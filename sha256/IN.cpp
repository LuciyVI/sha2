
#include <iostream> 
#include <vector>
#include </home/dr3ad/repos/LychiVI/sha256/sha256.h>
int main(){

std::cout << SHA256::hashString("test") << std::endl;

SHA256 buff;
buff.update("test", 4);
std::cout << buff.hash() << std::endl;    

}    
