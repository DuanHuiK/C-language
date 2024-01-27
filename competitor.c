//
//  main.c
//  Competitor
//
//  Created by Duan Huikai on 27/01/2024.
//

#include <stdio.h>

typedef struct Date {
    int year, month, day;
} Date;

typedef struct Competitor {
    char name[31];
    Date birth;
    int rank;
} Competitor;

void Date_print(Date d);

void Competitor_print(Competitor c);

int main(int argc, const char * argv[]) {
    Competitor competitors[5] = {
        { "Am, Erica", {1984, 5, 6}, 1 },
        { "Abnorm, Al", {1982, 9, 30}, 3 },
        { "Pri, Mary", {1988, 8, 25}, 2 },
        { "Duck, Ling", {1979, 6, 10}, 5 },
        { "Mac, Donald", {1992, 4, 5}, 4 },
    };
    /* name of competitor 0 - printf %s */
        printf("Name of competitor 0: %s\n", competitors[0].name);
    /* rank of competitor 2 */
        printf("Rank of competitor 2: %d\n", competitors[2].rank);
    /* birth date of competitor 4, use the given function */
        printf("Birth date of competitor 4: ");
        Date_print(competitors[4].birth);
    /* the first letter of the name of competitor 1 (a string is an array of characters) */
        printf("First letter of the name of competitor 1: %c\n", competitors[1].name[0]);
    /* is competitor 1 among the best three? yes/no, may use ?: operator */
    printf("Is competitor 1 among the best three?\n");
    if (competitors[1].rank <= 3)
        printf("Yes\n");
    else
        printf("No\n");
    /* is competitor 4 faster than competitor 3? */
    printf("Is competitor 4 faster than competitor 3? \n");
    if (competitors[4].rank < competitors[3].rank)
        printf("Yes\n");
    else
        printf("No\n");
    /* was competitor 1 born in the same year as competitor 2? */
        printf("Was competitor 1 born in the same year as competitor 2? \n");
    if (competitors[1].birth.year == competitors[2].birth.year)
        printf("Yes\n");
    else
        printf("No\n");
    /* complete the Competitor_print() function, then print all data of competitor 1*/
        printf("\nCompetitor 1 details:\n");
        Competitor_print(competitors[1]);
    /* at last print all data of all competitors. */
        printf("\nAll Competitors details:\n");
        for (int i = 0; i < 5; i++)
            Competitor_print(competitors[i]);
    return 0;
}

void Date_print(Date d) {
    /* print year, month and day */
    printf("%d.%d.%d\n", d.year, d.month, d.day);
}

void Competitor_print(Competitor c) {
    /* print all data of the competitor */
    printf("Name: %s\n", c.name);
        printf("Birth Date: ");
        Date_print(c.birth);
        printf("Rank: %d\n", c.rank);
        printf("\n");
}
