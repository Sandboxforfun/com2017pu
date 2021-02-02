#include<iostream>  
#include <boost/filesystem.hpp>
    
int main() 
{ 
      namespace fs = boost::filesystem;
      fs::path path1 = "/Users/luclambour";
      fs::path path2 = "/Users/luclambour/Desktop/Workspace";
std::string luctest = fs::relative(path1,path2).string();
std::string luctest2 = fs::absolute(path1,path2).string();

  
    return 0; 
} 