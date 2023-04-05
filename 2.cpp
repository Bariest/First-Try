#include <iostream> 
using namespace std;

int main()
{
 int num,num1,a;
 cin >> num >> num1;
 int count = 0;

 while(num <= num1) 
 {
  for(a = 1; a <= num; a++)
  {
    if(num % a == 0)
    count++;
  }
  if(count > 2)
  cout << num << endl;
  count = 0;
  num++;
 }
 return 0;
}