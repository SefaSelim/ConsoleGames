#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int dice()
{
    int zar=rand()%100+1;

    return zar;

}

int main(void)
{
    srand(time(NULL));
int car1Hp=100;
int car2Hp=100;
int dmg;
char chrName1[20];
char chrName2[20];
printf ("Lutfen 1. Oyuncunun Ismini Giriniz:\n");
scanf("%s",&chrName1);
printf ("Lutfen 2. Oyuncunun Ismini Giriniz:\n");
scanf("%s",&chrName2);


while (car1Hp>0 && car2Hp>0)
{
    printf("1.Oyuncunun Cani : %d \n2. Oyuncunun cani : %d \n\nAzami guc : 1\nMax guc : 100\n\n1. Oyuncunun Sirasi\nVermek istediginiz hasari giriniz:",car1Hp,car2Hp);
    scanf("%d",&dmg);
    printf("\n\n");
    if (dmg<dice())
    {
        car2Hp -= dmg;
    }
    else
        car1Hp -= dice();

printf("1.Oyuncunun Cani : %d \n2. Oyuncunun cani : %d \n\nAzami guc : 1\nMax guc : 100\n\n2. Oyuncunun Sirasi\nVermek istediginiz hasari giriniz:",car1Hp,car2Hp);
if (car1Hp < 0)
{
   printf("Uzgunum Ancak %s %s Tarafindan Alt Edildi, Ne Kadar Eziksin Dostum\n",chrName1,chrName2);
   return 0;
}
         scanf("%d",&dmg);
    printf("\n\n");
    if (dmg<dice())
    {
        car1Hp -= dmg;
    }
    else
        car2Hp -= dice();
}
if (car1Hp>0)
{
    printf("Tebrikler!!! %s Bu Oyunun Ilahi Dostum Gercekten Tebrikler!\n",chrName1);
}
else
{

    printf("Uzgunum Ancak %s %s Tarafindan Alt Edildi, Ne Kadar Eziksin Dostum\n",chrName1,chrName2);
}
    return 0;
}
