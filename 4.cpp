#include<stdio.h>
#include<math.h>
int main()
{
	int num,ld,fd,d;
	printf("Enter the number:");
	scanf("%d",&num);
	d=(int)log10(num);
	ld=num%10;
	fd=num/pow(10,d);
	int n1=fd*(pow(10,d));
	int n2=num%n1;
	num=n2/10;
	int numn=ld*(pow(10,d))+(num*10+fd);
	int sum=ld+fd;
	printf("Sum of 1st and last digit is = %d \n",sum);
	printf("Number after swapping = %d",numn);
	return 0;
}
