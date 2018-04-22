
void map(int *arr,  void (*fun)(int *cellArray)) {

    fun(arr + 2);
}
