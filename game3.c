#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//game3.c

void clearScreen()
{
    for (int i=0;i<20;i++)
    {
        printf("\n\n");
    }
}

struct character {
int health;
int maxHealth;
int stamina;
int maxStamina;
int criticalChance;
int power;
int money;

};



int main(void)
{
        srand(time(NULL));


    //stats
    struct character swordsman = {100,100,100,200,1,0,0};




    //necessary
    int placeOfTown;
    int placeOfLimitlessDungeon;
    int controllerOfLimitlessDungeon = 1;
    int hardnessOfLimitlessDungeon=0;
    int normalAttack=50;
    int staminaOfNormalAttack=20;
    int placeOfAttack;
    int healthOfEnemy;

    int rewardCalculator;
    int earnedMoney;
    int attackOfEnemy;




while(1)
{

        printf("Where Do You Want To Go ?\n");
    printf ("1)Dungeon\n");
    printf ("2)Blacksmith\n");
    printf ("3)The Wanderer\n");
    printf ("4)Strange Stone\n");

    scanf("%d",&placeOfTown);

    switch(placeOfTown)
    {

//dungeon
case 1:
    printf("Which Dungeon You Want To Go ?\n");
    printf("1)Limitless Dungeon\n");

    scanf("%d",&placeOfLimitlessDungeon);

    switch (placeOfLimitlessDungeon)
    {
//limitless dungeon
    case 1:
        printf("Entering The Limitless Dungeon Be Careful Buddy!...\n");
        sleep(2);
        clearScreen();
        printf("...\n");
        sleep(1);
        clearScreen();
        printf("..\n");
        sleep(1);
        clearScreen();
        printf("...\n");
        sleep(1);
        clearScreen();


        while(controllerOfLimitlessDungeon==1)
{



        switch(1)
        {
        case 1:
            healthOfEnemy = 100;
            healthOfEnemy += hardnessOfLimitlessDungeon*80;

            char enemyName[20] = "Mutant Frog"; //define in starter definitions

            printf("Thats a %s",enemyName);
            sleep(1);




            while (healthOfEnemy>0&&swordsman.health>0)
            {
                clearScreen();
//stats panel
printf("%d",swordsman.money);
                printf("\n                                                                        Health: %d / %d\n",swordsman.health,swordsman.maxHealth);
                printf("                                                                        Stamina: %d / %d\n\n",swordsman.health,swordsman.maxStamina);
                printf("%s Health: %d\n\n",enemyName,healthOfEnemy);


                printf("Choose Your Attack\n");

                printf("1)Normal Attack (Attacks = %d / Stamina = %d)\n",normalAttack,staminaOfNormalAttack);
                scanf("%d",&placeOfAttack);

                switch(placeOfAttack)
                {
                case 1:
                    healthOfEnemy -= normalAttack;
                    printf("Normal Attacks Hits %d\n",normalAttack*swordsman.criticalChance);
                    sleep(1);
                if (healthOfEnemy<1)
                {
                    printf("You Beat The %s\n",enemyName);
                    sleep(1);
                }






                }

                //enemy attack

                attackOfEnemy = 15+hardnessOfLimitlessDungeon*5;



                if (!(healthOfEnemy<1))
                {
                swordsman.health -= attackOfEnemy;
                printf("\n\n%s Hits %d\n",enemyName,attackOfEnemy);
                }
                usleep(1500000);

                if (swordsman.health<=0)
                {
                    printf("\n\n\nYou Are Dead // LOST THE GAME ");
                    sleep(5);
                    return 0;
                }








            }
            break;












        }






        hardnessOfLimitlessDungeon++;

        clearScreen();
        printf("Do You Want To Keep Going On ?\n");
        printf("0)No\n");
        printf("1)Yes\n");
        scanf("%d",&controllerOfLimitlessDungeon);
        clearScreen();
}

//Dungeon Rewards

rewardCalculator = rand()%hardnessOfLimitlessDungeon;

switch(rewardCalculator)
{
case 0:
    printf("You Joined Reward Pool 1\n\n");
    sleep(1);
    rewardCalculator = rand()%5+1;
    switch(rewardCalculator)
    {
    case 1:
        earnedMoney=rand()%80+(30*hardnessOfLimitlessDungeon);
        printf("You Earned %d Money",earnedMoney);
        swordsman.money += earnedMoney;
        sleep(1);
        clearScreen();
        break;

    case 2:

    case 3:
    case 4:
    case 5:
break;
    }

    break;


case 1:

case 2:

case 3:

case 4:
    break;







}









controllerOfLimitlessDungeon=1;
hardnessOfLimitlessDungeon=0;








break;




    }


break;






    }


}










}
