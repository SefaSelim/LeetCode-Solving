#include<stdio.h>
#include<stdlib.h>
#include <time.h>


int mineSweeper()
{
    int digging;
    int mine1=0;
    int mine2=0;
    int fmoney =100;
    printf("Hazine Alanina Hosgeldiniz!\n");
    sleep(2);
    printf("Burada 25 Bolmeden Olusan Alanlarda Hazine Aramasi Yaparak Para Kazanabilirsiniz\n\n");
    sleep(2);
    printf("Yalniz Dikkatli Olun!\n\n");
    sleep(2);
    printf("Eger Acgozlu Olur Ve Kazarken Bir Kayaya Toslarsaniz\n\n");
    sleep(2);
    printf("Kazandiginiz Tum Paralari Kaybedersiniz ve Eve Eliniz Bos Donmek Zorunda Kalirsiniz\n\n");
    sleep(2);
    printf("Yavastan Baslayalim...\n 1 den 25 e Kadar Sirali Araziler Bulacaksiniz\n\n");
    sleep(2);
    printf("Ne Kadar Alan Kazarsaniz, O Kadar Para Kazanacaksiniz. Bol Sans\n\n");
    sleep (2);
    printf("Baslamadan Once Hatirlatayim, Ayni Yeri 1 den Fazla Kere Kazabilirsiniz\n\n");
    sleep(2);
    printf ("1  2  3  4  5  \n6  7  8  9  10\n11 12 13 14 15 \n16 17 18 19 20 \n21 22 23 24 25\n\n\n");
    sleep(1);

    while (mine1==mine2)
    {
        mine1=rand()%25+1;
        mine2=rand()%25+1;
    }

    do
    {
    printf("Kazacaginiz Bolgeyi Secin\n\n");
    scanf("%d",&digging);

    if (digging==0)
    {
        return fmoney;
    }

    if (digging<0||digging>25)
    {
        printf("Size Ait Olmayan Araziye Dadandiniz, Hazine Haritasindan Kovuldunuz.\n");
        sleep(3);
        return 0;
    }


    if (digging == mine1 || digging == mine2)
    {
        printf("Kayaya Tosladiniz Uzgunuz Hicbir Sey Kazanamadiniz\n");
        sleep(1);
        return 0;
    }
    fmoney += fmoney/7;
    printf("\nCikarsaniz %d Kazanacaksiniz\n\n",fmoney);
    sleep(1);

        do
    {
        mine1=rand()%25+1;
        mine2=rand()%25+1;
    }
    while (mine1==mine2);



    }
    while(!0);






}

int main (void)

{
    srand(time(NULL));

    char name[20];
    int health=200;
    int mana=200;
    int money=200;
    int power = 1;
    int arena,pazar,buyucu;
    int tur;
    int guc=1;
    int kontr;
    int n;
    int bolge;
    int hardcore=0;


    //buyucu
    int pw1=2;
    int pw2=3;
    int pw3=4;
    int pw4=5;
    int pw5=6;
    int pw6=7;

    int sp1=100;

    int sp2=100;


    int sec;



    //pazar
    int secPazar;

    int sw1=100;
    int sw2=180;
    int sw3=250;
    int sw4=100;
    int sw5=180;
    int sw6=250;
    int sw7=300;
    int mysteryBox;
    int mineMoney=0;



    //arena
    int can1=rand()%150+100;
    int can2=rand()%300+200;
    int can3=rand()%600+400;
    int can4=3000;
    int zindan;
    int diceMe,diceEnemy;
    int yedek;


    //casino
    int bahis;
    int ascii;
    int betMoney;
    int whill;
    int casinoBlock=0;




    printf("Oyuncunun Ismi: \n");
    scanf("%s",&name);
    printf("Hardcore Modda casinoya girisiniz ve surpriz kutu aliminiz yasaklanacaktir (1/0)\nHardcore mod etkinlestirmek istiyor musunuz?\n");
    scanf("%d",&hardcore);


    while (health>0)
    {
        labelHardcore:
    printf("\n\n\nOyuncu: %s                Tur: %d\n\n",name,tur);
    printf("Can: %d\n",health);
    printf("Mana: %d\n",mana);
    printf("Para: %d\n",money);
    printf("Kalkan: %d\n",power);
    printf("Guc: %d\n\n",guc);

     can1=rand()%100+100;
     can2=rand()%300+200;
     can3=rand()%500+400;
     printf("Hangi Bolgeye Gitmek Istiyorsunuz?\n\n");
      printf("1)Arena\n");
       printf("2)Pazar\n");
        printf("3)Buyucu\n");
         printf("4)Casino\n");
        scanf("%d",&bolge);

     switch (bolge)
     {
        case 1:



            //arena mekanikleri
            if (mana<30)
            {
                printf("Savasacak manaya sahip degilsiniz\n");
                sleep(1);
               goto label;

            }

            else {
                 mana -= 30;
            }
            labelArena:
                if (health<=0)
                    {
                        printf("Oldunuz! Oyunun Kaybettiniz\n");
                        sleep (5);
                        return 0;
                    }

    printf("\n\n\nOyuncu: %s                Tur: %d\n\n",name,tur);
    printf("Can: %d\n",health);
    printf("Mana: %d\n",mana);
    printf("Para: %d\n",money);
    printf("Kalkan: %d\n",power);
    printf("Guc: %d\n\n",guc);

            printf("1) Zindan 1 : %d Can (Kazanilacak Para: %d)\n",can1,can1);
            printf("2) Zindan 2 : %d Can (Kazanilacak Para: %d)\n",can2,can2*12/10);
            printf("3) Zindan 3 : %d Can (Kazanilacak Para: %d)\n",can3,can3*3/2);
            printf("4) Zindan 4 : BOSS FIGHT\n",can4);
            printf("0) Zindandan cik\n");

            scanf("%d",&zindan);

            switch(zindan)
            {

                case 0: break;
                case 1:
                    yedek = money;
                     money += can1;
                      kontr=health;
                      n=9;
                    while((can1&&health)>0)
                    {
                        diceMe = rand()%(6+power)+1;

                        diceEnemy = rand ()%4;
                        if (kontr*n/10==health)

                        {
                            printf("\nSavasiliyor..\n");
                       sleep(1);
                            printf("Can: %d      Rakip Can: %d\n",health,can1);

                            sleep(1);
                            n--;

                        }


                        if (diceMe>diceEnemy)
                        {
                            can1 -= (0.9+guc/10);
                        }
                        else
                        {
                            health -=1;
                        }


                    }



                    printf("\n%d caniniz kaldi\n",health);
                    printf("%d para kazandiniz\n\n",money-yedek);
                    sleep(1);
                    goto labelArena;

                     case 2:
                    yedek = money;
                     money += can2*12/10;
                     kontr=health;
                      n=9;
                    while(can2 &&health>0)
                    {
                        diceMe = rand()%(6+power)+1;

                        diceEnemy = rand ()%5+1;
                         if (kontr*n/10==health)

                        {
                            printf("\nSavasiliyor..\n");
                       sleep(1);
                            printf("Can: %d      Rakip Can: %d\n",health,can2);

                            sleep(1);
                            n--;



                        }


                        if (diceMe>diceEnemy)
                        {
                            can2 -= (0.9+guc/10);
                        }
                        else
                        {
                            health -=1;
                        }

                    }


                    printf("\n%d caniniz kaldi\n",health);
                    printf("%d para kazandiniz\n\n",money-yedek);
                    sleep(1);
                    goto labelArena;

                     case 3:
                    yedek = money;
                     money += can3*3/2;
                     kontr=health;
                      n=9;
                    while((can3&&health)>0)
                    {
                        diceMe = rand()%(8+power)+1;

                        diceEnemy = rand ()%7+1;
                        if (kontr*n/10==health)

                        {
                            printf("\nSavasiliyor..\n");
                       sleep(1);
                            printf("Can: %d      Rakip Can: %d\n",health,can3);

                            sleep(1);
                            n--;



                        }


                        if (diceMe>diceEnemy)
                        {
                            can3 -= (0.9+guc/10);
                        }
                        else
                        {
                            health -=1;
                        }

                    }

                    printf("%d caniniz kaldi\n",health);
                    printf("%d para kazandiniz\n\n",money-yedek);
                    sleep(1);
                    goto labelArena;


                       case 4:
labelBoss:
                            kontr=health;
                      n=9;

                    while((can4&&health)>0)
                    {
                        diceMe = rand()%(8+power)+1;

                        diceEnemy = rand ()%10+1;

                        if (kontr*n/10==health)

                        {
                            printf("\nSavasiliyor..\n");
                       sleep(1);
                            printf("Can: %d      Rakip Can: %d\n",health,can4);

                            sleep(1);
                            n--;


                        }


                        if (diceMe>diceEnemy)
                        {
                            can4 -= (0.9+guc/10);
                        }
                        else
                        {
                            health -=1;
                        }

                    }


                    if (health>0)
                    {

                        printf("Tebrikler %s Oyun Bitti, Kazandin...\n %d Turda Oyunu Bitirdin\n",name,tur);
                        if (hardcore==1)
                        {
                             printf("Hem de hardcore mod etkin olarak oyunu bitirdin!");
                        }

                        sleep (5);
                        return 0;
                    }
                    printf("%d caniniz kaldi\n",health);
                    sleep(1);

                    break;



            }
            if (health<=0)
                    {
                        printf("Oldunuz! Oyunun Kaybettiniz\n");
                        sleep (5);
                        return 0;
                    }


label:


    break;
case 2:
    labelPazar:

//pazar mekanikleri


    printf("\n\n\nOyuncu: %s                Tur: %d\n\n",name,tur);
    printf("Can: %d\n",health);
    printf("Mana: %d\n",mana);
    printf("Para: %d\n",money);
    printf("Kalkan: %d\n",power);
    printf("Guc: %d\n\n",guc);

            printf ("\n1) 50 Can: %d Coin\n",sw1);
            printf ("2) 100 Can: %d Coin\n",sw2);
            printf ("3) 150 Can: %d Coin\n",sw3);
            printf ("4) 50 Mana: %d Coin\n",sw4);
            printf ("5) 100 Mana: %d Coin\n",sw5);
            printf ("6) 150 Mana: %d Coin\n",sw6);
            printf ("7) Surpriz Kutu : %d Coin\n",sw7);

             printf("\nHangisini almak istiyorsunuz ? (0 pazardan cik)\n");
             scanf("%d",&secPazar);

             switch(secPazar)
             {
                case 0: break;
                case 1:
                if (money>=sw1)
                {
                    printf("\n50 Can satin aldiniz\n");
                    money -= sw1;
                    health+=50;
                    sleep(1);
                    goto labelPazar;
                }
                else {
                    printf("yeterli paraniz bulunmamaktadir\n");
                    sleep(1);
                    goto labelPazar;
                }

                case 2:
                if (money>=sw2)
                {
                    printf("\n100 Can satin aldiniz\n");
                    money -= sw2;
                    health+=100;
                    sleep(1);
                   goto labelPazar;
                }
                else {
                    printf("yeterli paraniz bulunmamaktadir\n");
                    sleep(1);
                    goto labelPazar;
                }
                case 3:
                if (money>=sw3)
                {
                    printf("\n150 Can satin aldiniz\n");
                    money -= sw3;
                    health+=150;
                    sleep(1);
                    goto labelPazar;
                }
                else {
                    printf("yeterli paraniz bulunmamaktadir\n");
                    sleep(1);
                    goto labelPazar;
                }
                 case 4:
                if (money>=sw4)
                {
                    printf("\n50 Mana satin aldiniz\n");
                    money -= sw4;
                    mana+=50;
                    sleep(1);
                    goto labelPazar;
                }
                else {
                    printf("yeterli paraniz bulunmamaktadir\n");
                    sleep(1);
                    goto labelPazar;
                }
                 case 5:
                if (money>=sw5)
                {
                    printf("\n100 Mana satin aldiniz\n");
                    money -= sw5;
                    mana+=100;
                    sleep(1);
                    goto labelPazar;
                }
                else {
                    printf("yeterli paraniz bulunmamaktadir\n");
                    sleep(1);
                    goto labelPazar;
                }
                 case 6:
                if (money>=sw6)
                {
                    printf("\n150 Mana satin aldiniz\n");
                    money -= sw6;
                    mana+=150;
                    sleep(1);
                    goto labelPazar;
                }
                else {
                    printf("yeterli paraniz bulunmamaktadir\n");
                    sleep(1);
                    goto labelPazar;
                }
                 case 7:
                     if (hardcore==1)

                     {
                         printf("Hardcore Mod icinde surpriz kutu satin alamazsiniz!\n");
                         sleep(1);
                         goto labelPazar;

                     }
                     if (money>=sw7)
                {
                    printf("\nSurpriz Kutu satin aldiniz\n\n");

                    money -= sw7;
                    sleep(1);
                    mysteryBox=rand()%100+1;
                    if (mysteryBox<2)
                    {
                        printf("Bossla Savasa Gidiyorsun Bol Sans :D\n");
                        sleep(2);
                        goto labelBoss;
                    }
                    else if (mysteryBox<12)
                    {
                        printf("1 Kalkan Guclendirmesi Kazandiniz\n");
                        sleep(1);
                         sp1+=50;
                        power+=1;
                    }
                    else if (mysteryBox<22)
                    {
                        printf("1 Guc Guclendirmesi Kazandiniz\n");
                        sleep(1);
                         sp2+=50;
                        guc+=1;
                    }
                    else if (mysteryBox<27)
                    {
                        printf("2 Guc Guclendirmesi Kazandiniz\n");
                        sleep(1);
                         sp2+=100;
                        guc+=2;
                    }
                    else if (mysteryBox<32)
                    {
                        printf("2 Kalkan Guclendirmesi Kazandiniz\n");
                        sleep(1);
                         sp1+=100;
                        power+=2;
                    }
                    else if (mysteryBox<42)
                    {
                        printf("1 Guc Guclendirmesi Kaybettiniz\n");
                        sleep(1);
                         sp2-=50;
                        guc-=1;
                    }
                    else if (mysteryBox<52)
                    {
                        printf("1 Kalkan Guclendirmesi Kaybettiniz\n");
                         sp1-=50;
                        sleep(1);
                        power-=1;
                    }
                    else if (mysteryBox<60)
                    {
                        printf("Dedenizden Miras Kaldi 500 Para Kazandiniz\n");
                        sleep(1);
                        money+=500;
                    }
                    else if (mysteryBox<65)
                    {
                        printf("250 Can Kazandiniz");
                        sleep (1);
                        health += 250;
                    }
                    else if (mysteryBox<70)
                    {
                        printf("250 Mana Kazandiniz");
                        sleep (1);
                        mana += 250;
                    }
                    else if (mysteryBox<80)
                    {
                        printf("Tekrar Deneyiniz\n");
                        sleep(1);
                    }
                    else if (mysteryBox<83)
                    {
                        printf("Casinoya Girisiniz Yasaklanmistir !\n");
                        sleep(1);
                        casinoBlock = 1;
                    }
                    else if (mysteryBox<=100)
                    {
                        printf("Gizli Bir Hazine Haritasi Buldunuz !\nYalnizca Buraya Ozel Haritaya Gidiyorsunuz !\n\n\n\n\n");
                        sleep(3);
                        mineMoney += mineSweeper();
                        printf("Hazine Haritasindan %d Kazandiniz",mineMoney);
                        sleep (2);
                        money += mineMoney;
                        break;
                    }


                    goto labelPazar;
                }
                else {
                    printf("yeterli paraniz bulunmamaktadir\n");
                    sleep(1);
                    goto labelPazar;
                }

             }

    break;


case 3:
labelBuyucu:

            //buyucu mekanikleri
                printf("\n\n\nOyuncu: %s                Tur: %d\n\n",name,tur);
    printf("Can: %d\n",health);
    printf("Mana: %d\n",mana);
    printf("Para: %d\n",money);
    printf("Kalkan: %d\n",power);
    printf("Guc: %d\n\n",guc);

            printf ("\n1) Kalkan(%d) Seviyesini Artirmak Icin: %d Coin\n",power,sp1);
             printf ("2) Guc(%d) Seviyesini Artirmak Icin: %d Coin\n",guc,sp2);

            printf("\n(0 buyucuden cik)\n");

            scanf ("%d",&sec);

            switch(sec)
            {
            case 0: break;
                case 1:
                if (money>=sp1)
                {
                    printf("\nKalkaninizi 1 arttirdiniz\n");
                    money -= sp1;
                    power++;
                    sp1+=50;
                    sleep(1);
                    goto labelBuyucu;
                }
                else {
                    printf("yeterli paraniz bulunmamaktadir\n");
                    sleep(1);
                    goto labelBuyucu;
                    sleep(1);
                }

                case 2:
                    if (money >=sp2)
                    {
                        printf("\nGucunuzu 1 arttirdiniz\n");
                    money -= sp2;
                    guc++;
                    sp2+=50;
                    sleep(1);
                    goto labelBuyucu;
                    }
                    else {
                    printf("yeterli paraniz bulunmamaktadir\n");
                    sleep(1);
                    goto labelBuyucu;}

            }


break;

                case 4:
                    if (hardcore==1)
                    {
                         printf("Hardcore Mod icinde casinoya girisiniz yasaktir!\n");
                         sleep(1);
                         goto labelHardcore;
                    }
labelCasino:

                     //casino mekanikleri

                         printf("\n\n\nOyuncu: %s                Tur: %d\n\n",name,tur);
    printf("Can: %d\n",health);
    printf("Mana: %d\n",mana);
    printf("Para: %d\n",money);
    printf("Kalkan: %d\n",power);
    printf("Guc: %d\n\n",guc);

                     if (casinoBlock==1)
                     {
                         printf("Casinoya Girisiniz Yasaktir !\n");
                         sleep(1);
                         break;
                     }

                    printf("1  2  3  4  5  6  7  8\n\n");
                    printf("                           Bahis Giriniz (0 Casinodan Cik)\n");
                    printf("9(tek sayilar / 1.95x)      10(cift sayilar / 1.95x)      sayi tahmini(1,2,   8 / 7.6x )\n\n");
                    scanf("%d",&bahis);




                    switch(bahis)

                    {
                        default:
                            printf("Ne Kadar Bahis Yapmak Istiyorsunuz ?\n");
                    scanf("%d",&betMoney);
                    if (money<betMoney)
                    {
                        printf("\nBu Kadar Paraya Sahip Degilsiniz\n");
                        sleep(1);
                        goto labelCasino;
                    }

                     whill = rand()%8;
                     printf("Cekiliyor...\n");
                     sleep(1);
                     printf("Cekiliyor..\n");
                     sleep(1);
                     printf("Cekiliyor...\n\n");
                     sleep(1);
                     printf("Gelen Sayi: %d\n\n",whill+1);
                     sleep(1);
                     if (whill+1==bahis)
                     {
                         printf("%d Kazandiniz !\n",betMoney*152/20);
                         money += betMoney*152/20;
                         sleep(1);
                     }
                     else
                        {
                    printf("%d Kaybettiniz\n",betMoney);
                    money -=betMoney;
                    sleep(1);
                        }


                        goto labelCasino;


                    case 0:
                        break;


                    case 10:
                        printf("Ne Kadar Bahis Yapmak Istiyorsunuz ?\n");
                    scanf("%d",&betMoney);

                     if (money<betMoney)
                    {
                        printf("\nBu Kadar Paraya Sahip Degilsiniz\n");
                        sleep(1);
                        goto labelCasino;
                    }

                     whill = rand()%8;
                     printf("Cekiliyor...\n");
                     sleep(1);
                     printf("Cekiliyor..\n");
                     sleep(1);
                     printf("Cekiliyor...\n\n");
                     sleep(1);
                     printf("Gelen Sayi: %d\n\n",whill+1);
                     sleep(1);
                     if (whill%2+1==2)
                     {
                         printf("%d Kazandiniz !\n",betMoney*19/20);
                         money += betMoney*19/20;
                         sleep(1);
                     }
                     else
                        {
                    printf("%d Kaybettiniz\n",betMoney);
                    money -=betMoney;
                    sleep(1);
                        }


                        goto labelCasino;

                    case 9:
                        printf("Ne Kadar Bahis Yapmak Istiyorsunuz ?\n");
                    scanf("%d",&betMoney);

                     if (money<betMoney)
                    {
                        printf("\nBu Kadar Paraya Sahip Degilsiniz\n");
                        sleep(1);
                        goto labelCasino;
                    }

                     whill = rand()%8;
                     printf("Cekiliyor...\n");
                     sleep(1);
                     printf("Cekiliyor..\n");
                     sleep(1);
                     printf("Cekiliyor...\n\n");
                     sleep(1);
                     printf("Gelen Sayi: %d\n\n",whill+1);
                     sleep(1);
                     if (whill%2+1==1)
                     {
                         printf("%d Kazandiniz !\n",betMoney*19/20);
                         money += betMoney*19/20;
                         sleep(1);
                     }
                     else
                        {
                    printf("%d Kaybettiniz\n",betMoney);
                    money -=betMoney;
                    sleep(1);
                        }


                        goto labelCasino;


                    }
     }
tur++;

    }

    return 0;

}
