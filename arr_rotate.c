#include <stdio.h>

//int *left_rotation()
//{
//
//    
//}
void reverse(int a[], int start, int end)
{
    int i = start;
    int j = end-1;
    while(i<j)
    {
        int temp = a[i];
        a[i]=a[j];
        a[j]=temp;
        i++; j--;;
    }
}
void right_rotation(int a[],int len,int k)
{
    reverse(a,0,k+1);
    reverse(a,k+1,len);
    reverse(a,0,len);
}
void left_rotation(int a[],int len,int k)
{
    reverse(a,0,k);
    reverse(a,k,len);
    reverse(a,0,len);
}

void print(int arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int a[]={1,2,3,4,5};
    int b[]={1,2,3,4,5};
    int len = sizeof(a)/sizeof(a[0]);
    int r = 2;
    
    print(a,len);
    printf("Enter total number to ");
    scanf("%d",&r);
    
    printf("\nright rotation = ");
    right_rotation(a,len,r);
    print(a,len);
    printf("left rotation  = ");
    left_rotation(b,len,r);
    print(b,len);

    printf("\n"); 
return 0;
}
