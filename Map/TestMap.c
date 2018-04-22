void PlusTree(int *celArray)
{
    *celArray = *celArray +3;
}

void testMap()
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
}
