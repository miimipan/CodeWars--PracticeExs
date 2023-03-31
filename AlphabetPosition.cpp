/* In this kata you are required to, given a string, replace every letter with its position in the alphabet.

If anything in the text isn't a letter, ignore it and don't return it.

"a" = 1, "b" = 2, etc.

Example:

alphabet_position("The sunset sets at twelve o' clock.") >> Should return "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11" ( as a string ) 
*/

#include <string>

std::string alphabet_position(const std::string &text) {
  int size = text.length(); 
  std::string result;
   for (int i = 0; i < size; i++) {
        int temp = tolower(text[i])-96; //
        if (temp > 0 &&  temp < 27) {
            result += std::to_string(temp);
            result += " ";    
        }
    }
  result = result.substr(0, result.size()-1);
  return result;
}

void main(){
 std::string userInput; 
 std::cin >> userInput << endl;
 std::cout << alphabet_position( userInput) << endl;
  
}
