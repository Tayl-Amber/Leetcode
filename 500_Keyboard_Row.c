bool charInRow(const char* row, char ch) {
    while (*row != '\0') {
        if (*row == ch)
            return true;
        row++;
    }
    return false;
}

bool canBeTyped(const char* word) {
    const char* rows[] = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
    int rowIndices[] = {0, 0, 0};

    for (int i = 0; word[i] != '\0'; i++) {
        char ch = tolower(word[i]);
        for (int j = 0; j < 3; j++) {
            if (charInRow(rows[j], ch)) {
                rowIndices[j]++;
                break;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        if (rowIndices[i] == strlen(word))
            return true;
    }

    return false;
}

char** findWords(char** words, int wordsSize, int* returnSize) {
    char** result = (char**)malloc(wordsSize * sizeof(char*));
    *returnSize = 0;

    for (int i = 0; i < wordsSize; i++) {
        if (canBeTyped(words[i])) {
            result[*returnSize] = strdup(words[i]);
            (*returnSize)++;
        }
    }

    return result;
}
