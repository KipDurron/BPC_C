void inspectFunc(int *cellArray)
{
    if (*cellArray >= 7)
    {
        *cellArray = 6;
    }
}
void testsWhere()
{
int array[] = {1, 2, 3, 4, 8,9};
where(array,inspectFunc,6);
for (int i = 0; i<6; i++)
  {
    if (*(array + i)>= 7)
    {
        printf("False");
    }
    else{
         printf("True");
    }
  }

}
