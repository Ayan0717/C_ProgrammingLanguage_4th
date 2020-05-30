#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("prog 3_1\n");
	int num1=12400;
	double num2=5.234;
	printf("%d is an integer\n",num1);
	printf("%f is a double\n",num2);	
	
	printf("------------------------------\n");
	printf("prog 3_Ex_2\n");
	printf("num1的平方為%d\n",num1*num1);
	printf("num1的平方為%f\n",num2*num2);
	
	printf("------------------------------\n");
	printf("prog 3_Ex_12\n");
	char ch='\a';
	printf("Beep sound %c",ch);
	
	printf("------------------------------\n");
	printf("prog 3_Ex_16\n");
	printf("sizeof(unsigned int)=%d\n",sizeof(unsigned int));
	printf("sizeof(double)=%d\n",sizeof(double));
	printf("sizeof(unsigned short int)=%d\n",sizeof(unsigned short int));
	
	printf("------------------------------\n");
	printf("prog 3_Ex_17\n");
	printf("sizeof(578)=%d\n",sizeof(578));
	printf("sizeof(784000000)=%d\n",sizeof(784000000));
	printf("sizeof(6.78f)=%d\n",sizeof(6.78f));
	printf("sizeof(718.26)=%d\n",sizeof(718.26));
	printf("sizeof(642e127)=%d\n",sizeof(642e127));
	
	printf("------------------------------\n");
	printf("prog 3_Ex_18\n");
	float num3=123.39f;
	float num4=3.8e5f;
	printf("num3=%d\n",(int)num3);
	printf("num4=%d\n",(int)num4);
	
	system("pause");
	return 0;
} 
