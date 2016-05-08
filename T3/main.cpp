#include <stdio.h>
#include <iostream>
//#include <string>

using namespace std;

int main(int argc, char* argv[]){
   string tmp = "dfakdhfkah\n";
   char tmp11 = tmp.at(3);
   //printf("string2char:%s",tmp11.c_str());
   printf("string2char:%c\n",tmp11);
   cout << "add_to: " << tmp.c_str() << endl; 
  return 0;

}
