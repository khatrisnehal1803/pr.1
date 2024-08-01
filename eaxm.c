#include<stdio.h>
#include<conio.h>

main()
{
	int marks;
	char grade;
	
	printf("enter your marks:");
	
	
	scanf("%d",&marks);	
	
	 (marks>=80 && marks<100)
	
	?	printf("your grade is A\n",grade='A')
	
	:
	
		 (marks>=60 && marks<80)
		
		?	printf("your grade is B\n",grade='B')
		
		:
		
			 (marks>=40 && marks<60)
			
			?	printf("your grade is C\n",grade='C')
			
			:
			
				 (marks>=30 && marks<40)
				
				?	printf("your grade is D\n",grade='D')
				
				:
				
					 (marks>=0 && marks<30)
					
					?	printf("your grade is F\n",grade='F')
					
					:
					
						printf("enter the vaild marks");
						
	switch(grade)
	{
	case 'A':printf("Excellent Work!");
	break;
	case 'B':printf("Wll done!");
	break;
	case 'C':printf("Good job!");
	break;
	case 'D':printf("You passed,but you could do better!");
	break;
	case 'F':printf("Sorry,you are failed!");
	break;
	}
	
	if(marks>=30)
	{
		printf("congratulattions!you are eligible for the next level");
	}
	else
	{
		printf("please try again next time");
	}
					
				
			
		
	
}
