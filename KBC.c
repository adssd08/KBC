#include<stdio.h>
#include<conio.h>
int getUserAnswer(int i);
int useranswer,i=0;
int amount=0;
struct kbc
{
	char amount[20];
	char question[100];
	struct options
	{
		char option1[100];
		char option2[100];
		char option3[100];
		char option4[100];
		int correctOpt;
	}opt;
	
}question[15];
void main()
{
	
	//set amount
	int r=0,isLifelineUsed=0;
	char a;
	strcpy(question[0].amount,"Rs 1,000");
	strcpy(question[1].amount,"Rs 2,000");
	strcpy(question[2].amount,"Rs 5,000");
	strcpy(question[3].amount,"Rs 10,000");
	strcpy(question[4].amount,"Rs 20,000");
	strcpy(question[5].amount,"Rs 40,000");
	strcpy(question[6].amount,"Rs 80,000");
	strcpy(question[7].amount,"Rs 1,60,000");
	strcpy(question[8].amount,"Rs 3,20,000");
	strcpy(question[9].amount,"Rs 6,40,000");
	strcpy(question[10].amount,"Rs 12,50,000");
	strcpy(question[11].amount,"Rs 25 Lakh");
	strcpy(question[12].amount,"Rs 50 Lakh");
	strcpy(question[13].amount,"Rs 1 Crore");
	strcpy(question[14].amount,"Rs 5 Crore");
	//Question 1
	strcpy(question[0].question,"For 1000 Rs. only on your screen is \n\n With reference to a wedding, What does 'Laal Joda' means ?");
	strcpy(question[0].opt.option1,"Pair of bangles");
	strcpy(question[0].opt.option2,"Set of Clothes");
	strcpy(question[0].opt.option3,"Newly Married couple");
	strcpy(question[0].opt.option4,"Milani of Samdhis");
	question[0].opt.correctOpt=2;
	//Question 2
	strcpy(question[1].question,"hello2");
	strcpy(question[1].opt.option1,"av");
	strcpy(question[1].opt.option2,"2opt2");
	strcpy(question[1].opt.option3,"2opt3");
	strcpy(question[1].opt.option4,"2opt4");
	question[1].opt.correctOpt=1;
	//Question 3
	strcpy(question[2].question,"hello2");
	strcpy(question[2].opt.option1,"av");
	strcpy(question[2].opt.option2,"2opt2");
	strcpy(question[2].opt.option3,"2opt3");
	strcpy(question[2].opt.option4,"2opt4");
	question[2].opt.correctOpt=1;
	//Question 4
	//Add Yourself
	
	
	for(i=0;i<3;i++)
	{
		myquestion:
		printf("\n\nQuestion%d %s",i+1,question[i].question);
		printf("\n1 %s",question[i].opt.option1);
		printf("\t2 %s",question[i].opt.option2);
		printf("\n3 %s",question[i].opt.option3);
		printf("\t4 %s",question[i].opt.option4);
		wrongopt:
		if(isLifelineUsed==0){
	
		printf("\n\nDo you want to use lifeline : (Y/N)");
		a=getche();
		
		if(a=='y')
		{
			isLifelineUsed=1;
			printf("\nUsing 50-50 Lifeline \nRemoving 2 incorrect option");
			printf("\n\nQ%d %s",i+1,question[i].question);
			if(question[i].opt.correctOpt==1 || question[i].opt.correctOpt==3)
			{
				printf("\n1 %s",question[i].opt.option1);
				printf("\t2 ---------");
				printf("\n3 %s",question[i].opt.option3);
				printf("\t4 ---------");
			}
			else if(question[i].opt.correctOpt==2 || question[i].opt.correctOpt==4)
			{
				printf("\n1 ---------");
				printf("\t2 %s",question[i].opt.option2);
				printf("\n3 ---------");
				printf("\t4 %s",question[i].opt.option4);
			}
			r=getUserAnswer(i);
			if(r==2)
			{
				break;
			}else if(r==3)
			{
				goto myquestion;
			}
		}
		else if(a=='n')
		{
			r=getUserAnswer(i);
			if(r==2)
			{
				break;
			}
			else if(r==3)
			{
				goto myquestion;
			}
		}
		else
		{
			printf("Unknown option");
			goto wrongopt;
		}
		
	}
	else
	{
		r=getUserAnswer(i);
			if(r==2)
			{
				break;
			}
			else if(r==3)
			{
				goto myquestion;
			}
	}

}
	printf("\n\nGame Over");
}
int getUserAnswer(int i)
{
		printf("\n\nEnter your choice : ");
			scanf("%d",&useranswer);
			if(useranswer>0 && useranswer<=4 && useranswer==question[i].opt.correctOpt)
			{
				printf("\nCongratulations You WON %s",question[i].amount);
				//For Padao
				if(i==4)
				{
					amount = question[i].amount;
				}
				else if(i==8)
				{
					amount = question[i].amount;
				}
			}
			else if(!(useranswer>0 && useranswer<=4))
			{
				return 3;
			}
			else
			{
				if(amount!=0)
				{
					printf("\nCongratulations You WON %s",amount);
				}
				else
				{
					printf("You won Nothing");
				}
				return 2;
			}
			return 1;
}
