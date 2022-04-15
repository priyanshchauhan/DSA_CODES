# include <stdio.h> 

void insert(int a[], int n)
int main() {
    int a[],n;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements in array:");
    for(i=0; i<n; i++)
    {
        printf("%d",a[i]);
    }

     return 0 ;
}
void insert(int a[],int n){
    for(i=0; i<n; i++)
    {
        key=a[i];
        j=i-1;
    }
    while(j>0 && a[j]>key)
    {
        a[j+1]=a[j];
        j=j-1;
    }
    a[j+1]=key;
}