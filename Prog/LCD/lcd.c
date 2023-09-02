/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* draw(int b, int n) {
    char buffer[10000] = "";
    char line[10000] = "";
    int line_count = 2 + (b * 2);
    char dash[b+3];
    char blank[b+3];
    char bar_left[b+3];
    char bar_right[b+3];
    char bar_all[b+3];
    sprintf(dash, " %*c ", b, '-');
    sprintf(blank, " %*c ", b, ' ');
    sprintf(bar_left, "|%*c ", b, ' ');
    sprintf(bar_right, " %*c|", b, ' ');
    sprintf(bar_all, "|%*c|", b, ' ');
    char* dash_lines[3] = {"23567890", "2345689", "2356890"};

    for (int i = 0; i < line_count + 1; i++) {
        strcpy(line, "");
        char num_str[100];
        sprintf(num_str, "%d", n);
        for (int j = 0; j < strlen(num_str); j++) {
            char character = num_str[j];
            if (character == '|') {
                strcat(line, " ");
                continue;
            }
            if (i == 0 || i == line_count/2 || i == line_count) {
                char* dash_line = dash_lines[i == 0 ? 0 : i == line_count/2 ? 1 : 2];
                if (strchr(dash_line, character) != NULL) {
                    strcat(line, dash);
                } else {
                    strcat(line, blank);
                }
            } else if (i < line_count/2) {
                if (character == '4' || character == '8' || character == '9' || character == '0') {
                    strcat(line, bar_all);
                } else if (character == '1' || character == '2' || character == '3' || character == '7') {
                    strcat(line, bar_right);
                } else {
                    strcat(line, bar_left);
                }
            } else {
                if (character == '0' || character == '8' || character == '6') {
                    strcat(line, bar_all);
                } else if (character == '1' || character == '3' || character == '4' || character == '5' || character == '6' || character == '7' || character == '9') {
                    strcat(line, bar_right);
                } else {
                    strcat(line, bar_left);
                }
            }
        }
        strcat(buffer, line);
        strcat(buffer, "\n");
    }

    return strdup(buffer);
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    char* result = draw(N, M);
    printf("%s", result);
    free(result);
    return 0;
}

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* draw(int b, int n) {
    char buffer[10000] = "";
    char line[10000] = "";
    int line_count = 2 + (b * 2);
    char dash[b+1];
    char blank[b+1];
    char bar_left[b+1];
    char bar_right[b+1];
    char bar_all[b+1];
    memset(dash, '-', b);
    dash[b] = '\0';
    memset(blank, ' ', b);
    blank[b] = '\0';
    sprintf(bar_left, "|%*s ", b-1, "");
    sprintf(bar_right, " %-*s|", b-1, "");
    sprintf(bar_all, "|%*s|", b-1, "");
    char* dash_lines[3] = {"23567890", "2345689", "2356890"};

    for (int i = 0; i < line_count + 1; i++) {
        strcpy(line, "");
        char num_str[100];
        sprintf(num_str, "%d", n);
        for (int j = 0; j < strlen(num_str); j++) {
            char character = num_str[j];
            if (character == '|') {
                strcat(line, " ");
                continue;
            }
            if (i == 0 || i == line_count/2 || i == line_count) {
                char* dash_line = dash_lines[i == 0 ? 0 : i == line_count/2 ? 1 : 2];
                if (strchr(dash_line, character) != NULL) {
                    strcat(line, dash);
                } else {
                    strcat(line, blank);
                }
            } else if (i < line_count/2) {
                if (character == '4' || character == '8' || character == '9' || character == '0') {
                    strcat(line, bar_all);
                } else if (character == '1' || character == '2' || character == '3' || character == '7') {
                    strcat(line, bar_right);
                } else {
                    strcat(line, bar_left);
                }
            } else {
                if (character == '0' || character == '8' || character == '6') {
                    strcat(line, bar_all);
                } else if (character == '1' || character == '3' || character == '4' || character == '5' || character == '6' || character == '7' || character == '9') {
                    strcat(line, bar_right);
                } else {
                    strcat(line, bar_left);
                }
            }
            // Add a tab character after each digit
            strcat(line, "\t");
        }
        strcat(buffer, line);
        strcat(buffer, "\n");
    }

    return strdup(buffer);
}
int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    char* result = draw(N, M);
    printf("%s", result);
    free(result);
    return 0;
}
