#include <iostream>

using namespace std;

int main(){
    int num;
    scanf("%d",&num);


    int numlist [num]={0,};
    int sortedlist [num]={0,};
    int countlist [10000] = {0,};
    int countSum [10000] ;

    for(int i=0; i<num; i++){
        scanf("%d",&numlist[i]);

        countlist[numlist[i]] ++;
    }

    countSum[0] = countlist[0];

    for(int i=1; i<num; i++){
        countSum[i] = countSum[i-1] + countlist[i];
    }



    for(int i=num-1; i>=0; i++){
        sortedlist[countSum[numlist[i]]] = numlist[i];
        countSum[numlist[i]]--;
    }

    for(int i=0; i<num; i++){
        printf("%d",sortedlist[i]);
    }

}