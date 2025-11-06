

#include<stdio.h>


int main(){
float hoursworked;
float hourlywages;
float taxes;
float grosspay;
float netpay;

		printf("enter hours worked:");
		scanf("%f",&hoursworked);	
			
        printf("enter hourlywages:\n");
        scanf("%f",&hourlywages);
        
     if(hoursworked>40){
		 grosspay=(40*hourlywages)+((hoursworked-40)*40*1.5*hourlywages);
	 }else{
		 grosspay=hoursworked*hourlywages;
	 }
	 
	 if(grosspay>600){
		 taxes=(0.15*600)+(0.20*(grosspay-600));
	 }else{
		 taxes=0.15*grosspay;
	 }
	 
	 netpay=grosspay-taxes;
	 
	 printf("grosspay:$%.2f\n",grosspay);
	 printf("taxes:$%.2f\n",taxes);
	 printf("netpay:$%.2f\n",netpay);
	 
	 return 0;
}