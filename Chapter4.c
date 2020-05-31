#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("------------------------------\n");
	printf("prog 4_Ex_1\n");
	printf("I love C language best.\n");
	
	printf("------------------------------\n");
	printf("prog 4_Ex_2\n");
	printf("\"I love C language best.\"\n");
	
	printf("------------------------------\n");
	printf("prog 4_Ex_3\n");
	printf("\"Hello, C\"\n\"Hello, World\"\n");
	
	printf("------------------------------\n");
	printf("prog 4_Ex_4\n");
	printf("\"100/4=25\"\n");
	
	printf("------------------------------\n");
	printf("prog 4_Ex_5\n");
	printf("\'30%% 的學生來自中部地區, 42%% 的學生來自南部地區.\''\n");
	
	printf("------------------------------\n");
	printf("prog 4_Ex_6\n");
	float num1=28.47f;
	printf("num=%07.2f\n",num1);
	
	printf("------------------------------\n");
	printf("prog 4_Ex_7\n");
	float num2=12.34f;
	printf("num=%+08.2f\n",num2);
	
	printf("------------------------------\n");
	printf("prog 4_Ex_8\n");
	printf("There is an old saying, \"Love me, love my dog.\"\n");
	
	printf("------------------------------\n");
	printf("prog 4_Ex_10\n");
	int num3,num4;
	printf("請輸入兩個整數:(以空格區隔) ");
	scanf("%d %d",&num3,&num4);
	printf("%d * %d = %d\n",num3,num4,num3*num4); 
	
	printf("------------------------------\n");
	printf("prog 4_Ex_11\n");
	int num5,num6;
	printf("請輸入學生學號:");
	scanf("%d",&num5);
	printf("請輸入年齡:");
	scanf("%d",&num6);
	printf("學生學號:%d, 年齡:%d.\n",num5,num6);
	
	printf("------------------------------\n");
	printf("prog 4_Ex_12\n");
	char Name1[10];
	char Name2[10];
	printf("請輸入姓氏:");
	scanf("%s",Name1);
	printf("請輸入名字:");
	scanf("%s",Name2);
	printf("名字:%s,姓名:%s\n",Name2,Name1);
	
	printf("------------------------------\n");
	printf("prog 4_Ex_13\n");
	char str[10];
	printf("請輸入一長度最多為10字串:");
	scanf("%s",str);
	printf("(a) \"%s\"\n",str);
	printf("(b) \\%20s\\\n",str);
	printf("(c) \\%-20s\\\n",str);
	
	printf("------------------------------\n");
	printf("prog 4_Ex_14\n");
	int num7;
	printf("請輸入一十進位整數:");
	scanf("%d",&num7);
	printf("八進位:%o,十六進位:%x\n",num7,num7);
	
	printf("------------------------------\n");
	printf("prog 4_Ex_15\n");
	int num8;
	printf("請輸入一十六進位整數:");
	scanf("%x",&num8);
	printf("八進位:%o,十進位:%d\n",num8,num8);
	
	printf("------------------------------\n");
	printf("prog 4_Ex_16\n");
	char str2[25];
	printf("Input a string:");
	scanf("%s",str2);
	printf("(a)The string is %s\n",str2);
	char str3[25],str4[25],str5[25];
	printf("Input a string:");
	scanf("%s %s %s",str3,str4,str5);
	printf("(b)The string is %s %s %s\n",str3,str4,str5);
	
	printf("------------------------------\n");
	printf("prog 4_Ex_17\n");
	char ch1,ch2;
	printf("請輸入第一個字元:");
	scanf(" %c",&ch1);
	printf("請輸入第二個字元:");
	scanf(" %c",&ch2);
	printf("(b)ch1=%c, ch2=%c\n",ch1,ch2);
	char ch3,ch4;
	printf("請輸入第一個字元:");
	scanf(" %c",&ch3);
	fflush(stdin);
	printf("請輸入第二個字元:");
	scanf("%c",&ch4);
	printf("(c)ch3=%c, ch4=%c\n",ch3,ch4);

	printf("------------------------------\n");
	printf("prog 4_Ex_19\n");
	int num9;
	char ch5;
	printf("請輸入一個整數:");
	scanf("%d",&num9);
	fflush(stdin);
	printf("請輸入一個字元:");
	ch5=getchar();
	printf("num=%d, ASCII of ch=%d\n",num9, ch5);
	
	printf("------------------------------\n");
	printf("prog 4_Ex_20\n");
	char ch6,ch7;
	printf("請輸入一個字元:");
	ch6=getche();
	printf("您輸入的字元是:");
	putchar(ch6);
	putchar('\n');
	printf("請輸入一個字元:");
	ch7=getch();
	printf("您輸入的字元是:");
	putchar(ch7);
	putchar('\n');
	
	system("pause");
	return 0;
} 
