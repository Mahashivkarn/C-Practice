#include<stdio.h>
// Programming for always computer to win in matchsticks game 
int main(){
    int matchsticks=21;
    int user,compu;
    printf("The Matchsticks Game \n");

    while(matchsticks >1){
        printf("\nMatchsticks left=%d\n",matchsticks);

        printf("Pick 1,2,3 or 4 matchsticks");
        scanf("%d",&user);

    if(user<1 || user>4){
        printf("Invalid Choise!\n");

        continue;
    }
    compu=5-user;

    matchsticks=matchsticks-user-compu;

    printf("\nComputer picks %d matchsticks\n",compu);
    }
    printf("\nOnly one matchsticks left\n");

    printf("\nYou have to pick it\n");

    printf("\nHehehe You Loose!\n");
    return 0;
}