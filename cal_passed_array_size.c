#include<stdio.h>
#include<string.h>

void fun(int arr[]) 
{
   int n = sizeof(arr)/sizeof(arr[0]);
   printf("\nInt Array size inside fun() is %d\n", n);
}

void fun1(char arr[])
{
   int n = strlen(arr);
   printf("\nchar Array size inside fun() is %d\n", n);
}

void fun2(char arr[])
{
   int n = sizeof(arr)/sizeof(arr[0]);
   printf("\nchar Array size inside fun() is %d\n", n);
}
//warning: ‘sizeof’ on array function parameter ‘arr’ will return size of ‘char *’ 
// Driver program
int main()
{
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
   char brr[] = "Hello";

   unsigned int n = sizeof(arr)/sizeof(arr[0]);
   printf("Int Array size inside main() is %d", n);
   fun(arr); //Wrong return size of pointer
   
   unsigned int n1 = strlen(brr);  //Correct
   printf("Char Array size inside main() is %d", n1);
   fun1(brr); //Correct return size of pointer
   fun2(brr); //Wrong return size of pointer

   return 0;
}
