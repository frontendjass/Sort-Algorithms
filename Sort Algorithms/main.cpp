// Bubble sort algortithm

#include <iostream>
#include <fstream>

int main() {
    const int SIZE = 10000;
    int numbers[SIZE];
    int count = 0;
    
    std::ifstream file("random_numbers.txt");
    
    std::cout << "Opening random_numbers.txt" << std::endl;
    
    if (!file) {
        std::cout << "Error opening file!" << std::endl;
        return 1;
    }

    std::cout << "File opened succesfully!" << std::endl;
    
    // Copy numbers to numbers[] array
    while (count < SIZE && file >> numbers[count]) {
        count++;
    }
    
    file.close();
    
    // Bubble sort implementation
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
    
    // Display the sorted numbers
    std::cout << "Sorted numbers:" << std::endl;
    for (int i = 0; i < count; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
