/*   Author:        Miguel Martinez
     Date:          May 21th, 2016
     Description:   A program to display all prime numbers between 1 - 1000   */
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int a);

int  main()
{
  for (int i = 2; i < 1001; i++){ 	// 1 is a composite
    if (isPrime(i))
      cout << i << " ";
  }
  cout << endl;
}

bool isPrime(int a){
  for (int i = 2; i <= sqrt(a); i++){
    if (!(a % i))
      return false;
  }
  return true;
}
