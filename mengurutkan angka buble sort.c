#include <stdio.h>
int a[100];
int i,j,n,temp;
void main()
{
printf("Nama : MUHAMMAD HILMY ANSHORUDDIN\n");
printf("NIM  : 1102174233\n");
printf("Program Mengurutkan Angka Buble Sort\n");
printf("Banyak data : ");
scanf("%d",&n);
for (i=0;i<=n-1;i++)
{
printf("Data ke-%d : ",i+1);
scanf("%d",&a[i]);
}
//proses bubble sort
for (i=n-1;i>=1;i--)
for (j=1;j<=i;j++)
{
if (a[j-1]>a[j])
{
temp=a[j-1];
a[j-1]=a[j];
a[j]=temp;
}
}
//menampilkan hasil sorting
for (i=0;i<=n-1;i++)
{
printf("%d",a[i]);
printf(" ");
}
}
