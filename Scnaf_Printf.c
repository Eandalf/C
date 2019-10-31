/*Scnaf Printf 格式控制*/
#include<stdio.h>
using namespace std;

int main()
{
	char thing;
	int i;
	long int j;
	double k,oct,hex;
	char str[20];
	printf("please enter a character\n");
	scanf("%c",&thing);
	printf("please enter a integar\n");
	scanf("%d",&i);
	printf("please enter another integar\n");
	scanf("%d",&j);
	printf("please enter a number\n");
	scanf("%lf",&k);
	printf("please enter a string\n");
	scanf("%s",&str);
	printf("please enter a number in octal code\n");
	scanf("%o",&oct);
	printf("please enter a hexadecimal number\n");
	scanf("%x",&hex);
	
	printf(" %c\n %d\n %ld\n %e\n %f\n %%\n %o\n %s\n %u\n %x\n\n",thing,i,j,k,k,oct,str,i,hex);
	
	printf("%-3d\n%+5d\n% 7d\n%08d",i,i,i,i);
	
	return 0;
}
