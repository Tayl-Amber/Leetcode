  int min(int a, int b) {
    return a < b ? a : b;
}

int distributeCandies(int* candyType, int candyTypeSize) { 
    int uniqueTypes = 1;
    for (int i = 1; i < candyTypeSize && uniqueTypes < candyTypeSize / 2; i++) {
        int found = 0;
        for (int j = 0; j < i; j++) {
            if (candyType[i] == candyType[j]) {
                found = 1;
                break;
            }
        }
        if (!found)
            uniqueTypes++;
    }
    
    // Return the minimum of uniqueTypes and candyTypeSize / 2
    return min(uniqueTypes, candyTypeSize / 2);
}
