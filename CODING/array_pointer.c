# include <stdio.h> 

int main() {
    int a[]={2,3,4,5,6};
    int *b;
    b=a;
    printf("%p\n",a);
    printf("%p\n",b);
    b++;
    printf("%p\n",b);
    printf("%p\n",&b);
    printf("%d\n",a[2]);
    printf("%d\n",*(a+2));
    printf("%d\n",*(b+1));
    printf("%p\n",a+1);
    printf("%p\n",&a+1);
    printf("%p\n",&a[0]+1);
    printf("%p\n",*a);
    printf("%p\n",*(a+1));
    printf("%p\n",*a+1);
    return 0 ;
}