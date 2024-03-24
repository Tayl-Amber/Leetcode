int calPoints(char** operations, int operationsSize) {
    int* scores = (int*)malloc(operationsSize * sizeof(int));
    int top = -1;
    int sum = 0;
    
    for (int i = 0; i < operationsSize; i++) {
        if (strcmp(operations[i], "+") == 0) {
            int score = scores[top] + scores[top - 1];
            top++;
            scores[top] = score;
            sum += score;
        } else if (strcmp(operations[i], "D") == 0) {
            int score = 2 * scores[top];
            top++;
            scores[top] = score;
            sum += score;
        } else if (strcmp(operations[i], "C") == 0) {
            sum -= scores[top];
            top--;
        } else {
            top++;
            scores[top] = atoi(operations[i]);
            sum += scores[top];
        }
    }
    
    free(scores);
    return sum;
}
