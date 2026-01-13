#include <stdio.h>
main(){
	float s; // Sure degiskeni
	
	while(1) // Sonsuz dongu bir döngü başlar
    {
		printf("sure= ");scanf("%f",&s);
		if(s>0 && s<=0.5)
			{printf("Ucret 0TL");break;} // Dogru giris yapıldığında, donguden cik
		else if(s>0.5 && s<=2)
			{printf("Ucret 160TL");break;}
		else if(s>2 && s<=4)
			{printf("Ucret 250TL");break;}
		else if(s>4 && s<=8)
			{printf("Ucret 400TL");break;}
		else if(s>8 && s<=12)
			{printf("Ucret 600TL");break;}
		else
			continue; // Tablo disi bir deger girildiginde basa doner
	}
}