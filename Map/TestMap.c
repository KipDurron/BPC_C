//3 элемент массива ув. на 3
void PlusTree(int *celArray)
{
    *celArray = *celArray +3;
}

void testsMap()
{
    int array[] = {1, 2, 3, 4, 5};
    map(array,PlusTree);
    if (array[2] == 6)
    {
        printf("True");
    }
    else{
       printf("False");
    }
     if (array[3] == 7)
    {
        printf("True");
    }
    else{
       printf("False");
    }
}
