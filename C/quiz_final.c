#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#define MAX 64
#define SET_TOTAL 5

int main()
{

    // Question sets
    char q_set1[5][MAX] = {
        // multiple-choice
        "How many legs does a spider have?",
        "What is the name of the toy cowboy in Toy Story?",
        "What is the color of an emerald?",
        "What is something you hit with a hammer?",
        "What is the name of the fairy in Peter Pan?"};
    char q_set2[5][MAX] = {
        // true or false
        "The Atlantic Ocean is the largest ocean on the planet. (TRUE or FALSE)",
        "The human body comprises of four lungs. (TRUE or FALSE)",
        "The study of stars is called \"Astronomy\". (TRUE or FALSE)",
        "Carnivores are animal eaters. (TRUE or FALSE)",
        "Mars is the closest planet to the Sun. (TRUE or FALSE)"};
    char q_set3[5][MAX] = {
        // fill in the blanks
        "\"Magdamag nag-aabang. Maglalaro kaya?\nAng dalagang nagtatago sa alyas na ______.\"\n--(Chiksilog - Kamikazee)",
        "\"Ayos lang, basta't kasama\nKonting ____ lang, kahit walang pulutan.\"\n--(Sige - 6CycleMind)",
        "\"Nakita kita sa isang magasin,\n_____ ang 'yong suot at buhok mo'y green.\"\n--(Magasin - Eraserheads)",
        "\"Tulad ng mundong hindi _______ sa pag-ikot\nPag-ibig 'di mapapagod.\"\n--(Magbalik - Callalily)",
        "\"Aking _____, ikaw na ang tahanan at mundo.\"\n--(Mundo - IV of Spades)"};

    // Prompts for choices in qs1
    char qs1_prompt[5][MAX] = {
        "[a] Eight    [c] Eleven\n[b] Twelve    [d] Seven",
        "[a] Clingy    [c] Scully\n[b] Woody    [d] Sunny",
        "[a] Yellow    [c] Orange\n[b] Green    [d] Blue",
        "[a] Screw    [c] Thumbtack\n[b] Button    [d] Nail",
        "[a] Wonderbell    [c] Tinkerbell\n[b] Fairybell    [d] Pottybell"};

    // Answer keys
    char ans1[5] = {'a', 'b', 'b', 'd', 'c'};
    char ans2[5][MAX] = {"false", "false", "true", "true", "false"};
    char ans3[5][MAX] = {"maldita", "alak", "dilaw", "tumitigil", "sinta"};

    // Scores
    int score1 = 0;
    int score2 = 0;
    int score3 = 0;
    int total = 0;

    // Question Process
    printf("[ Question Set 1 ]\n");
    for (int i = 0; i < 5; i++)
    {
        char answer;
        printf("%d). %s \n %s\n", i + 1, q_set1 + i, qs1_prompt + i);
        printf("> ");
        scanf("%c", &answer);
        answer = tolower(answer); // lower character

        if (answer == ans1[i])
            score1++;

        printf("\n");
        getchar();
    }

    printf("[ Question Set 2 ]\n");
    for (int i = 0; i < 5; i++)
    {
        char input2[MAX] = {};
        printf("%d). %s\n", i + 1, q_set2[i]);
        printf("> ");
        fgets(input2, MAX, stdin);

        // sanitizing input (removing whitespaces, lowercasing)
        input2[strcspn(input2, "\r\n")] = '\0';
        for (int i = 0; input2[i]; i++)
            input2[i] = tolower(input2[i]);

        //printf("strcmp: %i\n", strcmp(input2, ans2[i]));

        if (strcmp(input2, ans2[i]) == 0)
            score2++;

        //debug
        //printf("input: %s \nanswer: %s\n", input2, ans2[i]);
        //printf("Score: %i\n", score2);
        printf("\n");
    }

    printf("[ Question Set 3 ]\n");
    for (int i = 0; i < 5; i++)
    {
        char input3[MAX] = "";
        printf("%d). %s\n\n", i + 1, q_set3[i]);
        printf("> ");
        fgets(input3, MAX, stdin);

        // sanitize input
        input3[strcspn(input3, "\r\n")] = '\0';
        for (int i = 0; input3[i]; i++)
            input3[i] = tolower(input3[i]);

        //printf("strcmp: %i\n", strcmp(input3, ans3[i]));

        if (strcmp(input3, ans3[i]) == 0)
            score3++;

        //debug
        //printf("input: %s \nanswer: %s\n", input3, ans3[i]);
        //printf("Score: %i\n", score3);
        printf("\n");
    }

    total = score1 + score2 + score3;

    printf("Multiple Choice\nCorrect Answers: %d\nIncorrect Answers: %d\n\n", score1, SET_TOTAL - score1);
    printf("True or False\nCorrect Answers: %d\nIncorrect Answers: %d\n\n", score2, SET_TOTAL - score2);
    printf("Fill in the Blanks\nCorrect Answers: %d\nIncorrect Answers: %d\n\n", score3, SET_TOTAL - score3);
    printf("Total Score: %d / 15", total);
    return 0;
}
