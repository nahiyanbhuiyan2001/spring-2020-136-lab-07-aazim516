#include <iostream>
#include <fstream>
#include <string>
#include "shapes.h"


//part A
std::string removeLeadingSpaces(std::string line)
{
  for(int i=0;i<line.length();i++)
  {
    if(line[i]==' ')
    {
      line.replace(i,1,"");
      i--;
    }
    else
      break;
  }
  return line;
}

std::string part_A(std::string file_name)
{
  std::string good_code="";
  std::ifstream fin(file_name);//text file
  if (fin.fail())
  {
        std::cerr << "File cannot be read, opened, or does not exist.\n";
        exit(1);
  }
  std::string line;
  while(getline(fin,line))
  {
    good_code+=removeLeadingSpaces(line)+"\n";
  }
  return good_code;
}


//Part B
void countChar(std::string line, int& counter)
{
  for(int i=0;i<line.length();i++)
  {
    if(line[i]=='{')
      counter++;
    else if(line[i]=='}')
      counter--;
  }
}

std::string part_B(std::string file_name)
{
  int count=0;
  std::string space="";
  std::string good_code="";
  std::ifstream fin(file_name);
  if (fin.fail())
  {
        std::cerr << "File cannot be read, opened, or does not exist.\n";
        exit(1);
  }
  std::string line;
  while(getline(fin,line))
  {
    space="";
    for(int i=0;i<count;i++)
      space+=" ";
    if(line[0]=='}')
      space.replace(0,1,"");
    countChar(line,count);
    good_code+=(space+line+"\n");
  }
  return good_code;




}
