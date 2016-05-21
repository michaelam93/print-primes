/*   Author:        Miguel Martinez
     Date:          May 21th, 2016
     Description:   A program to display all prime numbers between 1 - 1000   */
#include <iostream>
using namespace std;

int  main()
{
     for (int i = 2; i < 1000; i++){
          for (int j = 2; j < i; j++){
               if (!(i % j))
                    break;
               else if (i == ++j) 
                    cout << i << " ";
          }
     }
     cout << endl;
}
