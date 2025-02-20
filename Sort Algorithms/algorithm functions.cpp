//
//  algorithm functions.cpp
//  Sort Algorithms
//
//  Created by Juan Sosa on 2/19/25.
//

#include "algorithm functions.hpp"

void BubbleSort(int numbers[], int SIZE, int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // Swap the elements
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}
