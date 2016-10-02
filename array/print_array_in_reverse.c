#include<stdio.h>
void get_data(int a[],int size);
void display(int a[],int size);
void reverse_array(int a[],int size );
int main()
{
	int size,i;
	//printf("enetr the size of array::");
	scanf("%d",&size);
	int a[size];
	get_data(a,size);
//	display(a,size);
	reverse_array(a,size);
	
	

	

	
	return 0;
}
void get_data(int a[],int size)
	{	
		int i;
			for(i=0;i<size;i++)
	{
		//printf("enter the %dth eliment::",i);
		scanf("%d",(a+i));
	}
		
	}
void display(int a[],int size)
	{
		int i;
			for(i=0;i<size;i++)
	{
		//printf(" the %dth eliment::%d \n ",i,a[i]);
		
	}
	
	}
	
void reverse_array(int a[],int size )
{
	int i;
			for(i=size-1;i>=0;i--)
			{
			//printf(" the %dth eliment::%d \n ",i,a[i]);
			printf("%d\n",a[i]);
					
			}
			
}	
