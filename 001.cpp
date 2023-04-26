#include<stdio.h>
#include<math.h>
int main()
{
	for(int i=10;;i++)
	{
		if(i%5==1 && i%6==5 && i%7==4 && i%11==10)
		{
			printf("至少有%d个士兵",i);
			goto end;
		}
	}
	end:
	return 0;
}

