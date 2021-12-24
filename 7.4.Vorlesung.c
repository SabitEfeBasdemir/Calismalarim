#include <stdio.h>
#include <stdlib.h>

int main() {

/* Teog Prüfung erste Sitzung Punkte Berechnung
mathematik=3.575747;
naturwissenscahft=3.0052362;
türkisch=3.22324;
geschichte=2.235235;
religion=1.346346;
englisch=1.43464567;
philosophie=2.2124253;*/

float basis,mathematik,mn,naturwissenscahft,nn,türkisch,tn,religion,rn,geschichte,gn,englisch,en,philosophie,pn,insgesamt ;

basis=100.150;


printf(" Mathematik:  ");
scanf("%f",&mathematik);

printf(" Naturwissenschaft:  ");
scanf("%f",&naturwissenscahft);

printf(" Türkisch:  ");
scanf("%f",&türkisch);

printf(" Geschichte:  ");
scanf("%f",&geschichte);

printf(" Religion:  ");
scanf("%f",&religion);

printf(" Englisch:  ");
scanf("%f",&englisch);

printf(" Philosophie:  ");
scanf("%f",&philosophie);

mn=mathematik*3.575747;
nn=naturwissenscahft*3.0052362;
tn=türkisch*3.22324;
gn=geschichte*2.235235;
rn=religion*1.346346;
en=englisch*1.43464567;
pn=philosophie*2.2124253;
insgesamt=basis+mathematik*3.575747+naturwissenscahft*3.0052362+türkisch*3.22324+geschichte*2.235235+religion*1.346346+englisch*1.43464567+philosophie*2.2124253+basis;

printf("Mathematik Netto: %f\n",mn);
printf("Naturwissenschaft Netto: %f\n",nn);
printf("Türkisch Netto: %f\n",tn);
printf("Geschichte Netto: %f\n",gn);
printf("Religion Netto: %f\n",gn);
printf("Englisch Netto: %f\n",en);
printf("Philosophie Netto: %f\n",pn);
printf("Insgesamt Netto: %f\n",insgesamt);

return 0;


}