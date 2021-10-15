#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 int main(int argc, char *argv[]) {
	
    float lower_dis_km,upper_dis_km,step_size_km; // DISTANCE IN KM
	float dis_mil; // DISTANE IN MILE
    float  t;// TIME IN NATURAL FORM 
	int t_h;// VARIABLE WHICH CONTAINS NUMBER OF HOURS
    float t_min;// NUMBER OF MINUTES
	int i ;
	printf("Enter the lower limit on distance in km :    ");
	scanf("%f",&lower_dis_km);// ENTRING lower  DISTANCE IN KM
	printf("\nEnter the upper limit on distance in km:    ");
	scanf("%f",&upper_dis_km);// ENTRING upper  DISTANCE IN KM
 
		printf("\nEnter the step size in km:   ");
	scanf("%f",&step_size_km);// ENTRING step size IN KM
	if( lower_dis_km<0 || upper_dis_km<0 || step_size_km<0  || upper_dis_km < lower_dis_km || upper_dis_km < step_size_km){
		printf("\n INVALID INPUTS");
		return 0;
	}
	else
 	printf("\n================================================");
 	printf("\n| distance (km) |     hours     |    minutes    |");
	printf("\n================================================");
	for(i=lower_dis_km;i<=upper_dis_km;i=i+step_size_km) {
		dis_mil=(i)*(0.621371);// CONVERTING THE DISTANCE FROM KM TO MILE
	t=(dis_mil*1)/529;// CALCULATE THE TIME BASED ON AVERAGE SPEED
	t_h=t;// EXTRACT THE NUMBER OF HOURS
	t_min=(t-t_h)*60;// CLACULATE THE NUMBER OF MINUTES
    printf("\n|\t%d\t|\t%d\t|\t%.0f\t| ",i,t_h,t_min);
}
	return 0;
}
