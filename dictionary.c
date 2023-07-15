#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

#define DICT_SIZE 100

typedef struct {
    int number;
    char *word;
} Entry;

typedef struct {
    Entry dict[DICT_SIZE];
    int count;
} Dictionary;

void trim(char *str) {
    int len = strlen(str);
    int start = 0;
    int end = len - 1;

    while (str[start] == ' ')
        start++;

    while (str[end] == ' ')
        end--;

    for (int i = start; i <= end; i++)
        str[i - start] = str[i];

    str[end - start + 1] = '\0';
}

void parseDict(Dictionary *dictionary, const char *filename) {
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        write(STDOUT_FILENO, "Dict Error\n", 11);
        exit(1);
    }

    char buffer[1024];
    int index = 0;

    while (read(fd, buffer, sizeof(buffer)) > 0) {
        char *line = strtok(buffer, "\n");

        while (line != NULL) {
            trim(line);

            char *colon = strchr(line, ':');
            if (colon == NULL) {
                write(STDOUT_FILENO, "Dict Error\n", 11);
                exit(1);
            }

            *colon = '\0';
            int num = atoi(line);
            char *word = colon + 1;

            dictionary->dict[index].number = num;
            dictionary->dict[index].word = strdup(word);

            index++;
            line = strtok(NULL, "\n");
        }
    }

    dictionary->count = index;

    close(fd);
}

char *getWord(const Dictionary *dictionary, int number) {
    for (int i = 0; i < dictionary->count; i++) {
        if (dictionary->dict[i].number == number)
            return dictionary->dict[i].word;
    }

    return NULL;
}

void convertToWord(const Dictionary *dictionary, int number) {
    char *word = getWord(dictionary, number);
    if (word == NULL) {
        write(STDOUT_FILENO, "Dict Error\n", 11);
        exit(1);
    }

    write(STDOUT_FILENO, word, strlen(word));
    write(STDOUT_FILENO, "\n", 1);
}

int main(int argc, char *argv[]) {
    if (argc < 2 || argc > 3) {
        write(STDOUT_FILENO, "Error: Invalid number of arguments\n", 34);
        write(STDOUT_FILENO, "Usage: ", 7);
        write(STDOUT_FILENO, argv[0], strlen(argv[0]));
        write(STDOUT_FILENO, " <number> [<dictionary_file>]\n", 30);
        return 1;
    }

    char *numberStr = argv[1];
    if (numberStr[0] == '\0') {
        write(STDOUT_FILENO, "Error: Number cannot be empty\n", 30);
        return 1;
    }

    for (int i = 0; numberStr[i] != '\0'; i++) {
        if (numberStr[i] < '0' || numberStr[i] > '9') {
            write(STDOUT_FILENO, "Error: Invalid number\n", 22);
            return 1;
        }
    }

    Dictionary dictionary;

    if (argc == 3) {
        char *dictionaryFile = argv[2];
        parseDict(&dictionary, dictionaryFile);
    } else {
        parseDict(&dictionary, "numbers.dict");
    }

    int number = atoi(numberStr);
    convertToWord(&dictionary, number);

    return 0;
}
