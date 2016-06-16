/*   Author:        Miguel Martinez
     Date:          May 21th, 2016
     Description:   A program to display all prime numbers between 1 - 1000   */
#include <iostream>
#include <cmath>

int  main(){
  for (int i = 2; i < 1001; i++){ 	// 1 is a composite
    for (int j = 2; j < sqrt(i); j++){
      if (!(i % j))
	goto end;
    }
    std::cout << i << " ";
  end:;
  }
  std::cout << std::endl;
}
