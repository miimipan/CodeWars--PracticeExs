#include <cstdint>
#include <string>
#include <bitset>
#include <iostream>

std::string add_binary(uint64_t a, uint64_t b) {
  auto sum = a + b;
  std::string result = std::bitset<64> (sum).to_string(); // convert the sum to a binary and string
  
 try{
  auto posi = result.find('1'); //find the index where the character '1' appears first
  if(posi != std::string::npos){ // check if the index is -1 or not
    result = result.substr(posi); // keeps from index posi til end
  }  
   else {result = "0";} // cases where there is a sum and its zero
 }
  
  catch (...){
    //for cases where a non number is given
    result = "Invalid result for a = " + std::to_string(a) + ", b = " + std::to_string(b); 
  }
  
  return result;
}
