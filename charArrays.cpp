#include <iostream>

// default arguments
// multiply with 3-5 parameters
int multiply(int n1, int n2, int n3, int n4 = 1, int n5 = 1) {
    return n1 * n2 * n3 * n4 * n5;
}

int returnOneIfEven(int number, bool flag = false) {
    return (flag ? (number % 2 == 0 ? 1 : -1) : -1);
}

// char arrays diff string
// -> declaration & definition
// -> caeser 
// -> reverse from a symbol

// strlen -> <cstring>
// 
int length(char word[]) {
    // '\0'
    int i = 0, size = 0;
    while(word[i] != '\0') {
        ++i;
        ++size;
    }
    return size;
}

void reverseSpecial(char word[], char symbol) {
    int len = length(word);
    std::cout << "length: " << len << std::endl;
    int i = 0, indexOfSymbol = -1;
    while(i < len && word[i] != symbol){
        i++;
    }
    indexOfSymbol = (i >= len ? -1 : i);
    if (indexOfSymbol != -1) {
        for (int j = 0; j < indexOfSymbol; ++j) {
            std::cout << word[j];
        }
        for (int j = len - 1; j >= indexOfSymbol; --j) {
            std::cout << word[j];
        }
        return;
    }
    std::cout << "Symbol is not present in the word" <<std::endl;
    std::cout <<"Word: "<< word <<std::endl;
    std::cout << "Symbol: "<< symbol <<std::endl;
}

// Шифърът на Цезар е метод за кодиране на съобщения, 
// при който всяка буква от съобщението се замества с 
// буквата на фиксиран брой позиции от нея в азбуката. 
// Например при шифър с изместване 5, всяко срещане на 
// буквата a ще се замени с f, а всяко срещане на z - с e 
// (т.е. ако стигнем края на азбуката, продължаваме да броим от началото). 
// Всички останали символи, които не са букви (включително интервали и 
// пунктуация), не се променят.

bool isNotALetter(char symbol) {
    return (!(symbol >= 'a' && symbol <= 'z') && !(symbol >= 'A' && symbol <= 'Z'));    
    // return ((symbol > 'z' || symbol < 'a') && (symbol < 'A' || symbol > 'Z'));
}

const unsigned int ALPHABET_SIZE = 26;
void encodeCaesar(char word[], int shift) {
    int index = 0;
    char lowerOrUpper = 'a', begin = 'a';
    if (shift < 0) {
        lowerOrUpper = 'z';
    }
    while(word[index] != '\0') {
        if (isNotALetter(word[index])) {
            std::cout << word[index];
            index++;
            continue;
        }
        if ('A' <= word[index] && word[index] <= 'Z') {
            lowerOrUpper = (lowerOrUpper - 'a') + 'A';
            begin = 'A';
        }
        // ('a' - 5 - 'a') % 26 + 'a'
        // ('a' - 5 - 'a') % 26 + 'z'
        // 10 [1 2 3 4 5 6 7 8 9 10] +2 (index + 2)%10
        std::cout << char(int(word[index] + shift - begin) % ALPHABET_SIZE + lowerOrUpper);
        index++;
    }
    std::cout << std::endl;
}

// John is playing a dice game. The rules are as follows.

// Roll two dice.
// Add the numbers on the dice together.
// Add the total to your overall score.
// Repeat this for three rounds.
// But if you roll DOUBLES, your score is instantly wiped to 0 and your game ends immediately!

const int MAX_ROLLS = 10;
const int DICE_COUNT = 2;

int getDiceResult(int rolls[][DICE_COUNT], int roll_count) {
    int sum = 0;
    for (int rollIndex = 0; rollIndex < roll_count; ++rollIndex) {
        bool evenDice = true;
        int prevDice = rolls[rollIndex][0];
        sum += prevDice;
        for(int diceIndex = 1; diceIndex < DICE_COUNT; ++diceIndex) {
            if (rolls[rollIndex][diceIndex] != prevDice) {
                evenDice = false;
                sum +=  rolls[rollIndex][diceIndex];
            }
        }
        if (evenDice) {
            return 0;
        }
    }
}

int main() {

    // std::cout << multiply(1,2,3,4) << std::endl;

    //declaration - size + 1
    // char array[100], symbol; // '\0'
    // definition
    // char arr[] = {'a', 'b', 'c', '\0', 'd'}; // -> "abc\0d"
    // char arr2[] = "abc"; // -> "abc\0"

    // 
    // std::cout << arr << std::endl;
    // std::cout << arr2 << std::endl;

    // std::cout << "Enter a word: ";
    // std::cin >> array;
    // std::cout << "Enter a symbol: ";
    // std::cin >> symbol;
    // reverseSpecial(array, symbol);
    // std::cout << array << std::endl;

    // char toEncode[100];
    // int shift;
    // std::cin >> toEncode;
    // std::cin >> shift;
    // encodeCaesar(toEncode, shift);

    int dice1[][2] = {
        {1, 2},
        {3, 4},
        {5, 6},
    };

    int dice2[][2] = {
        {1, 2},
        {3, 4},
        {5, 5},
    };

    std::cout << "Dice 1: " << getDiceResult(dice1, 3) <<std::endl;
    std::cout << "Dice 2: " << getDiceResult(dice2, 3) <<std::endl;
    return 0;
}