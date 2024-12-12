#include<stdio.h>
int main(){
	printf("==============CHUONG TRINH CHUYEN DOI TIEN TE=============\n");
	printf("1. USD to VND\n2. EUR to VND\n3. GBP to VND\n4. JPY to VND\n5. VND to USD\n6. VND to EUR\n7. VND to GBP\n8. VND to JPY\n");
	int currency_unit;
	float USD=23500, EUR = 25000, GBP = 28000, JPY = 180;
	float  money, doi;
	 do{
	 	printf("moi nhap don vi tien te ma ban muon chuyen doi(1-8) : ");
		scanf("%d",&currency_unit);
	}while(currency_unit<0||currency_unit>8);
	printf("nhap so tien ma ban muon doi: ");
	scanf("%f",&money);
	switch(currency_unit){
		case 1:
			doi=money*USD;
			printf("%.2f USD = %.2f VND",money,doi);
			break;
		case 2:
			doi=money*EUR;
			printf("%.2f EUR = %.2f VND",money,doi);
			break;	
		case 3:
			doi=money*GBP;
			printf("%.2f GBP = %.2f VND",money,doi);
			break;	
		case 4:
			doi=money*JPY;
			printf("%.2f JPY = %.2f VND",money,doi);
			break;	
		case 5:
			doi=money/USD;
			printf("%.2f VND = %.4f USD",money,doi);
			break;	
		case 6:
			doi=money/EUR;
			printf("%.2f VND = %.4f EUR",money,doi);
			break;	
		case 7:
			doi=money/GBP;
			printf("%.2f VND = %.4f GBP",money,doi);
			break;	
		case 8:
			doi=money/JPY;
			printf("%.2f VND = %.4f JPY",money,doi);
			break;			
			
	}
	return 0;
	
	
}
