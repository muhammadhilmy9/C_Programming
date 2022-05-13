#include <stdio.h> 
int a[100]; 
int i,j,x,n,cari,idx,low,high,mid,min,temp; 
void main ()
{
	char nama[100],nim[100];
	printf("Nama : ");gets(nama);
	printf("NIM  : ");gets(nim);
	printf("\n");
	printf("Banyak data : "); scanf("%d",&n); 
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Angka yang dicari : "); scanf("%d",&cari);
	for (i=0;i<n;i++)
	{
		if (cari==a[i])
			x=i;
	}
	for (i=n-1;i>=1;i--)
		for (j=1;j<=i;j++)
		{ 
			if (a[j-1]>a[j])
			{
				temp=a[j-1]; a[j-1]=a[j]; a[j]=temp;
			}
		}
	low=1; high=n; idx=0; 
	while ((low<=high) && (idx==0))
	{
		mid=(low+high)/2; 
		if (a[mid]==cari)
			idx=mid;
		else 
			if (a[mid]<cari)
			low=mid+1;
			else high=mid-1;
	}
	if (idx!=0) 
		printf("\nAngka %d ditemukan pada indeks ke %d",cari,x);
	else 
		printf("Angka tidak ditemukan");
}
