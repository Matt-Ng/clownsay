
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{   
    string message = "";
    if(argc != 1){
        for(int i = 1; i < argc; i++){
            message += argv[i];
        }
    }
    else{
        std::getline( std::cin, message);
    }
    std::cout << '+';
    for(int i = 0; i < message.length(); i++){
	std::cout << '-';
    }
    std::cout << '+' << '\n';
    std::cout << message << '\n';    
    
    std::cout << '+';
    for(int i = 0; i < message.length(); i++){
        std::cout << '-';
    }
    std::cout << '+' << '\n';


    std::cout << R"(
	\
	 \
	  \
              _
         (_) -
               '
       @_  _    '
        )\/(@    '
      __(/ \--._
     (,-.---'--'@
      @ )0_0(     _
        ('-')    (_)
   '    _\Y/_      
   ' .-'-\-/-'-._  '
   _ /    '*     \ '
  (_)  /)  *    .-.))>'
    ._/  \__*_ /\__'.
'<((_'    |__H/  \__\
          /   ,_/ |_|
          )-- /   |x|
          \ _/    (_ x
          /_/       \_\@
         /_/
snd     /_/
       /x/
      (_ x
        \_\@

    )" << '\n';

    return 0;
}


