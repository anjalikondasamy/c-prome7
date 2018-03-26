#include<stdio.h>
#include<conio.h>
void main()
{
	int n,t,r=0,i;
  cllrscr();
	printf("Enter the number:");
    scanf("%d",&n);
	while(n!=0)
	{
		t=n%10;
		r=(r*10)+t;
		n=n/10;
	}
	printf("The odd numbers are:");
	while(r!=0)
	{
		i=r%10;
		r=r/10;
		if(i%2!=0)
		{
		  printf("%d  ",i);
		}
 }
}


