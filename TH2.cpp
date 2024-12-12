#include<stdio.h>
int main(){
	int gio_thang, money, lcb, phu_cap, tong;
	printf("moi nhap so gio lam viec trong thang: ");
	scanf("%d",&gio_thang);
	printf("muc luong theo gio:");
	scanf("%d", &money);
	if(gio_thang>160){
		phu_cap=0.1*gio_thang*money;
		lcb=gio_thang*money;
		tong=phu_cap+lcb;
	}
	else{
		phu_cap=0;
		lcb=gio_thang*money;
	}
	printf("tien luong co ban la: %d\n",lcb);
	printf("phu cap la: %d",phu_cap);
}
