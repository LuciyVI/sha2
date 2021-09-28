#include <iostream> 
#include <vector>
#include </home/dr3ad/repos/LychiVI/sha256/sha256.h>

int main()
{
    
   char data;
   std::cin >> data;
   
   void sha256_init(struct sha256_buff* data);
   void sha256_easy_hash(uint64_t* data);
   void update(const void* data, std::size_t size);
   std::cout<<data<<std::endl;
   
}