#include <stdio.h>

int main(){
    int cricketScores[4][2]={
        {185, 192},
        {210, 178},
        {165, 165},
        {245, 220}
    };
    int numMatches = 4;
    int numTeams = 2;
    printf("=== IPL Match Highest Scores ===\n");
    for (int i = 0; i < numMatches; i++){
        int highestScore = cricketScores[i][0];
        for (int j = 1; j < numTeams; j++){
            if (cricketScores[i][j] > highestScore){
                highestScore = cricketScores[i][j];
            }
        }
        printf("Match %d Highest Score: %d runs\n", i + 1, highestScore);
    }
    return 0;
}