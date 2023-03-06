#include "stdio.h"
int soNgayCuaThang(int thang, int nam){
	switch(thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			return ((nam % 400 ==0)||(nam%4==0 && nam %100 !=0))?29:28;
		default:
			return -1;			
	}
}
int ngayTrongNam(int ngay, int thang, int nam){
	int ntn = 0;
	for(int i=1; i<thang; i++){
		ntn+=soNgayCuaThang(i, nam);
	}
	ntn+=ngay;
	return ntn;
}
void inNgayTruocDo(int ngay, int thang, int nam){
	if (ngay==1){
		if(thang==1){
			ngay=31;
			thang=12;
			nam--;
	    }else{
	    	thang--;
	    	ngay=soNgayCuaThang(thang, nam);
		}
	}else{
		ngay--;
	}
	printf("\nNgay truoc do: %d/%d/%d", ngay, thang, nam);
}
void inNgayKeDo(int ngay, int thang, int nam){
	int nct = soNgayCuaThang(thang, nam);
	if(ngay==nct){
		if(thang==12){
			ngay = 1; 
			thang = 1;
			nam++;
		}else{
			ngay=1;
			thang++;
	    }
	}else{
		ngay++;
    } 
		printf("\nNgay ke do: %d/%d/%d", ngay, thang, nam);
}
int main(){
	int ngay, thang, nam;
	do{
		printf("Nhap vao ngay thang nam: ");
		scanf("%d%d%d, &ngay, &thang, &nam");
	}while(ngay<1 || ngay>31 || thang<1 || thang>12 || nam<1);
	printf("\nSo ngay cua thang: %d", soNgayCuaThang(thang, nam));
	printf("\nNgay trong nam: %d", ngayTrongNam(ngay, thang, nam));
	inNgayTruocDo(ngay, thang, nam);
	inNgayKeDo(ngay, thang, nam);
}
