// 100% RUNTIME  -   5.51% / 7.80MB MEMORY

int numWaterBottles(int numBottles, int numExchange) {
        int drinkedBottles = numBottles;


     while(numBottles = numExchange){
        drinkedBottles += numBottles  numExchange;
        numBottles = numBottles  numExchange + numBottles % numExchange;
    }

    return drinkedBottles;
}