//ARRAY:-
/*#include <stdio.h>
int main()
{
   int a[50],size,i;
   printf("Enter the size:");
   scanf("%d", &size);
   printf("Enter the elements:");
   for(i=0 ; i<size; i++){
       scanf("%d",&a[i]);
   }
   printf("Elements in array are:");
   for(i=0; i<size; i++)
   {
       printf("%d",a[i]);
   }
}*/

//INSERTION AT SPECIFIC POSITION:-
/*# include <stdio.h> 

int main() {
    int a[50], size, i, num, pos;
    printf("Enter the size:");
    scanf("%d",&size);
    printf("Enter the elements:");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the positon where you want to insertt ");
    scanf("%d",&pos);
    printf("enter the data you want to insert\n");
    scanf("%d",&num);
    for(int j=size-1;j>=pos-1;j--)
    {
        a[j+1]=a[j];
    }a[pos-1]=num;
    size=size+1;
     for(i=0; i<size; i++)
    {
        printf("the data is : %d\n",a[i]);
    }
     return 0 ;
}*/


//INSERTION FROM BEGINNING:-
/*# include <stdio.h> 

int main() {
    int a[50], size, i, num, pos;
    printf("Enter the size:");
    scanf("%d",&size);
    printf("Enter the elements:");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("enter the data you want to insert\n");
    scanf("%d",&num);
    for(int j=size-1;j>=0;j--)
    {
        a[j+1]=a[j];
    }a[0]=num;
    size=size+1;
     for(i=0; i<size; i++)
    {
        printf("the data is : %d\n",a[i]);
    }
     return 0 ;
}*/


//DELETION FROM SPECIFIC POSTION:-
# include <stdio.h> 

int main() {
    int a[50], size, i, pos;
    printf("Enter the size of array:" );
    scanf("%d",&size);
    printf("Enter the elements:");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Which position you want delete:");
    scanf("%d",&pos);
    if(pos<=0 || pos>size)
    {
        printf("Invalid Position");
    }
    else
        for(i=pos-1; i<size-1; i++)
        {
            a[i]=a[i+1];
        }
        size--;
       
    printf("Elements in array:");
    for(i=0; i<size; i++)
    {
        printf("%d",a[i]);
    }
    return 0 ;
}