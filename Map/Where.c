#include <stdbool.h>



int * where(int *arr,  void (*fun)(int *cellArray), int SizeArray) {

 for (int i = 0; i<SizeArray; i++)
  {
    fun(arr + i);
  }
return arr;
}
