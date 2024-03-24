int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

char** findRelativeRanks(int* score, int scoreSize, int* returnSize) {
    // Allocate memory for the result array
    char** result = (char**)malloc(scoreSize * sizeof(char*));
    *returnSize = scoreSize;

    // Structure to store score and its original index
    typedef struct {
        int score;
        int index;
    } ScoreIndex;

    // Create an array of ScoreIndex structures and initialize it with scores and their indices
    ScoreIndex* scoresWithIndex = (ScoreIndex*)malloc(scoreSize * sizeof(ScoreIndex));
    for (int i = 0; i < scoreSize; i++) {
        scoresWithIndex[i].score = score[i];
        scoresWithIndex[i].index = i;
    }

    // Sort the scores in descending order along with their indices
    qsort(scoresWithIndex, scoreSize, sizeof(ScoreIndex), compare);

    // Assign ranks to athletes based on sorted order
    for (int i = 0; i < scoreSize; i++) {
        int rank = i + 1;
        if (rank == 1)
            result[scoresWithIndex[i].index] = "Gold Medal";
        else if (rank == 2)
            result[scoresWithIndex[i].index] = "Silver Medal";
        else if (rank == 3)
            result[scoresWithIndex[i].index] = "Bronze Medal";
        else {
            // Convert integer rank to string
            char* rankStr = (char*)malloc(10 * sizeof(char));
            sprintf(rankStr, "%d", rank);
            result[scoresWithIndex[i].index] = rankStr;
        }
    }

    free(scoresWithIndex); // Free memory allocated for scoresWithIndex array

    return result;
}
