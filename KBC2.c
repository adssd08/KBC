#include<stdio.h>

int getUserAnswer(int i);
int useranswer,i=0;
int amount=0;
struct kbc
{
	char amount[20];
	char question[200];
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
	
	
	strcpy(question[0].question,"For 1000 Rs. only on your screen is \n\n With reference to a wedding, What does 'Laal Joda' means ?");
	strcpy(question[0].opt.option1,"Pair of bangles");
	strcpy(question[0].opt.option2,"Set of Clothes ");
	strcpy(question[0].opt.option3,"Newly Married couple");
	strcpy(question[0].opt.option4,"Milani of Samdhis");
	question[0].opt.correctOpt=2;
	
	strcpy(question[1].question,"For 2,000 Rs. on your screen is \n\n The slogan 'One Nation', 'One Tax', 'One Market' was used for the promotion of which tax scheme by the central govt?");
	strcpy(question[1].opt.option1,"GST");
	strcpy(question[1].opt.option2,"DDT");
	strcpy(question[1].opt.option3,"STT");
	strcpy(question[1].opt.option4,"CST");
	question[1].opt.correctOpt=1;
	
	strcpy(question[2].question,"For 5,000  Rs. on your screen is \n\n The name of which of these Shakpearan character features in an anti eve-teasing squad formed in the state of Uttar Pradesh ?");
	strcpy(question[2].opt.option1,"Macbeth");
	strcpy(question[2].opt.option2,"Hamlet");
	strcpy(question[2].opt.option3,"Othello");
	strcpy(question[2].opt.option4,"Romeo");
	question[2].opt.correctOpt=4;
	
	
	strcpy(question[3].question,"For 10,000 Rs. on your screen is \n\n What is the common name for surgery conducted on coronary arteries that supply blood to the heart ? ");
	strcpy(question[3].opt.option1,"Cataract");
	strcpy(question[3].opt.option2,"Gastric");
	strcpy(question[3].opt.option3,"Bypass");
	strcpy(question[3].opt.option4,"Debridement");
	question[3].opt.correctOpt=3;
	
	strcpy(question[4].question,"For 20,000  Rs. on your screen is \n\n How many players of a Kho-Kho team can play on the field during the match ?");
	strcpy(question[4].opt.option1,"10");
	strcpy(question[4].opt.option2,"9");
	strcpy(question[4].opt.option3,"7");
	strcpy(question[4].opt.option4,"8");
	question[4].opt.correctOpt=2;
	
	strcpy(question[5].question,"For 40,000  Rs. on your screen is \n\n Muammar Gaddafi was the ruler of which country from 1969 to 2011?");
	strcpy(question[5].opt.option1,"Libiyah");
	strcpy(question[5].opt.option2,"Tunisia");
	strcpy(question[5].opt.option3,"Sudan");
	strcpy(question[5].opt.option4,"Egypt");
	question[5].opt.correctOpt=1;
	
	strcpy(question[6].question,"For 80,000  Rs. on your screen is \n\n Who is the author of the play 'Andher Nagri'??");
	strcpy(question[6].opt.option1,"Mohan Rakesh");
	strcpy(question[6].opt.option2,"Amritlal Nagar");
	strcpy(question[6].opt.option3,"Bharatendu Harishchandra");
	strcpy(question[6].opt.option4,"Dharamvir Bharati");
	question[6].opt.correctOpt=3;
	
	strcpy(question[7].question,"For 1,60,000  Rs. on your screen is \n\n According to the 2011-2012 Union Budget, people of which age(in years) are considered as 'very senior citizen'?");
	strcpy(question[7].opt.option1,"65");
	strcpy(question[7].opt.option2,"75");
	strcpy(question[7].opt.option3,"80");
	strcpy(question[7].opt.option4,"90");
	question[7].opt.correctOpt=3;
	
	strcpy(question[8].question,"For 3,20,000  Rs. on your screen is \n\n After Sachin Tendulkar which Indian Batsmen has scored the most number of runs in Test Cricket?");
	strcpy(question[8].opt.option1,"Sunil Gacaskar");
	strcpy(question[8].opt.option2,"Rahul Dravid");
	strcpy(question[8].opt.option3,"Md Azharuddin");
	strcpy(question[8].opt.option4,"VVS Laxman");
	question[8].opt.correctOpt=2;
	
	strcpy(question[9].question,"For 6,40,000  Rs. on your screen is \n\n Which investigation agency was founded in 2009 and given special powers to probe terror crimes in India?");
	strcpy(question[9].opt.option1,"National Security Guard");
	strcpy(question[9].opt.option2,"Special Task Force");
	strcpy(question[9].opt.option3,"National Investigation Agency");
	strcpy(question[9].opt.option4,"Anti-Terrorism Squad");
	question[9].opt.correctOpt=1;
	
	strcpy(question[10].question,"For 12,50,000  Rs. on your screen is \n\n According to Hindu mythology, Who among these was the daughter of an 'apsara' and 'rishi'?");
	strcpy(question[10].opt.option1,"Devaki");
	strcpy(question[10].opt.option2,"Rukmani");
	strcpy(question[10].opt.option3,"Shakuntala");
	strcpy(question[10].opt.option4,"Ganga");
	question[10].opt.correctOpt=3;
	
	strcpy(question[11].question,"For 25,00,000  Rs. on your screen is \n\n What was the only dowry, apart from a few yards of khadi, that Lal Bahadur Shastri accepted in his marriage?");
	strcpy(question[11].opt.option1,"Bhagwad Gita");
	strcpy(question[11].opt.option2,"Khadaun");
	strcpy(question[11].opt.option3,"Gandhi");
	strcpy(question[11].opt.option4,"Chakra");
	question[11].opt.correctOpt=4;
	
	strcpy(question[12].question,"For 50,00,000  Rs. on your screen is \n\n Among whom does the Indian Constitution permit to take part in the Proceedings of Parliament?");
	strcpy(question[12].opt.option1,"Solicitor General");
	strcpy(question[12].opt.option2,"Attorney General");
	strcpy(question[12].opt.option3,"Cabinet Secretary");
	strcpy(question[12].opt.option4,"Chief Justice");
	question[12].opt.correctOpt=2;
	
	strcpy(question[13].question,"For 1,00,00,000  Rs. on your screen is \n\n Which of the following forts was not built by the European colonial powers in India?");
	strcpy(question[13].opt.option1,"Fort Dansborg");
	strcpy(question[13].opt.option2,"Fort Naarden");
	strcpy(question[13].opt.option3,"Fort Chambray");
	strcpy(question[13].opt.option4,"Fort Santa Katherina");
	question[13].opt.correctOpt=3;
	
	strcpy(question[14].question,"For 5,00,00,000  Rs. on your screen is \n\n Which colonial power ended its involvement in India by selling the rights of the Nicobar Islands to the British on October 18, 1868?");
	strcpy(question[14].opt.option1,"Belgium");
	strcpy(question[14].opt.option2,"Italy");
	strcpy(question[14].opt.option3,"Denmark");
	strcpy(question[14].opt.option4,"France");
	question[14].opt.correctOpt=3;
	
	
	for(i=0;i<15;i++)
	{
		myquestion:
		printf("\n\nQuestion%d %s",i+1,question[i].question);
		printf("\n1 %s",question[i].opt.option1);
		printf("\t2 %s",question[i].opt.option2);
		printf("\n3 %s",question[i].opt.option3);
		printf("\t4 %s",question[i].opt.option4);
		wrongopt:
		if(isLifelineUsed==0){
	
		printf("\n\nDo you want to use lifeline : (y/n)");
		scanf("%c",&a);
		
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
