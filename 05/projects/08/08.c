#include <stdio.h>

int main(void)
{
	// Departure time	Minutes since midnight
	//  8:00 a.m.		 480
	//  9:43 a.m.		 583
	// 11:19 a.m.		 679
	// 12:47 p.m.		 767
	//  2:00 p.m.		 840
	//  3:45 p.m.		 945
	//  7:00 p.m.		1140
	//  9:45 p.m.		1305
	//	
	// Midpoints
	// ( 480 +  583) / 2 =  531
	// ( 583 +  679) / 2 =  631
	// ( 679 +  767) / 2 =  723
	// ( 767 +  840) / 2 =  803
	// ( 840 +  945) / 2 =  892
	// ( 945 + 1140) / 2 = 1042
	// (1140 + 1305) / 2 = 1222

	int hours, minutes;

	printf("Enter a 24-hour time: ");		
	scanf("%d:%d", &hours, &minutes);

	int time_in_mins = (hours * 60) + minutes;

	printf("Closest departure time is ");

	if (time_in_mins <= 531)
		printf("8:00 a.m., arriving at 10:16 a.m.");
	else if (time_in_mins <= 631)
		printf("9:43 a.m., arriving at 11:52 a.m.");
	else if (time_in_mins <= 723)
		printf("11:19 a.m., arriving at 1:31 p.m.");
	else if (time_in_mins <= 803)
		printf("12:47 p.m., arriving at 3:00 p.m.");
	else if (time_in_mins <= 892)
		printf("2:00 p.m., arriving at 4:08 p.m.");
	else if (time_in_mins <= 1042)
		printf("3:45 p.m., arriving at 5:55 p.m.");
	else if (time_in_mins <= 1222)
		printf("7:00 p.m., arriving at 9:20 p.m.");
	else
		printf("9:45 p.m., arriving at 11:58 p.m.");

	printf("\n");

	return 0;
}
