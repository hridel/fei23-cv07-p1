#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[100];
    char ch;

    printf("Zadejte větu:\n");
    fgets(sentence, 100, stdin);

    // Otevření souboru pro zápis
    FILE *input = fopen("input.txt", "w");
    fprintf(input, "%s", sentence);
    fclose(input);

    FILE *output = fopen("output.txt", "w");
    FILE *input2 = fopen("input.txt", "r");

    while ((ch = fgetc(input2)) != EOF) {
        if (islower(ch)) {
            ch = toupper(ch);
        }
        fputc(ch, output);
        printf("%c", ch);
    }

    fclose(input2);
    fclose(output);

    return 0;
}
