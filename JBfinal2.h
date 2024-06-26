/* final.h -- constants and declarations for final.c */

//menu options
#define QUIT 0
#define INPUT 1
#define OUTPUT 2
#define SHIFT 3
#define ENCODE 4
#define DECODE 5
#define MAX_WORD_LENGTH 20 // Maximum length of a word to check
#define MAX_POSSIBLE_DECODES 100 // Maximum number of possible decodes
#define STARS "***********************************************************************"

//menu display of valid options
int menu(char* inputFile, char* outputFile, int shiftNum);

//prompts user to select a .txt file to be read
void input(char* inputFile);

//prompts user to select a file to be written
void output(char* outputFile);

//asks user to input an integer and returns an integer value to shift the input text by
int shift(int number);

//shifts inputFile text by shiftNum and outputs shifted text to outputFile
void encode(char* inputFile, char* outputFile, int shiftNum);

int wordMatchesList(char* word);

//attempts to decode an inputFile text and outputs text to outputFile
void shiftDecode(char* inputFile);

