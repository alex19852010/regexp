#include <iostream>
#include <regex>

using namespace std;

bool check(string &input)
{
  const regex patern("^(?=.*[A-Z])(?=.*[a-z])(?=.*\\d)[a-zA-Z\\d*&!?^%]{5}$");
  return regex_match(input, patern);
}

int main()
{

 while(1)
 {

string input;
cout << "enter date: ";
cin >> input;

if(check(input))
{
  cout << "verification was successful" << endl;
}

else
{
 cout << "error !!!" << endl;
}
 }   


    return 0;
}