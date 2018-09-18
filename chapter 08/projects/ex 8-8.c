/**************************************************************************************
Modify Programming Project 7 so that it prompts for five quiz grades for each of five
students, then computes the total score and average score for each student, and the
average score, high schore and low score for each quiz
**************************************************************************************/

#include <stdio.h>

#define NUM_QUIZ  5
#define NUM_STUDENTS 5

int main()
{
  int grades[NUM_STUDENTS][NUM_QUIZ];
  int high, low, quiz, student, total;

  for (student = 0; student < NUM_STUDENTS; student++)
  {
    printf("Enter grades for student %d: ", student + 1);
    for (quiz = 0; quiz < NUM_QUIZ; quiz++)
    {
        scanf("%d", &grades[student][quiz]);
    }
  }

  printf("\nStudent  Total  Average\n");
  for (student = 0; student < NUM_STUDENTS; student++)
  {
    printf("%4d      ", student + 1);
    total = 0;
    for (quiz = 0; quiz < NUM_QUIZ; quiz++)
    {
        total += grades[student][quiz];
    }
    printf("%3d     %3d\n", total, total / NUM_QUIZ);
  }

  printf("\nQuiz  Average  High  Low\n");
  for (quiz = 0; quiz < NUM_QUIZ; quiz++)
  {
    printf("%3d     ", quiz + 1);
    total = 0;
    high = 0;
    low = 100;
    for (student = 0; student < NUM_STUDENTS; student++)
    {
      total += grades[student][quiz];
      if (grades[student][quiz] > high)
        high = grades[student][quiz];
      if (grades[student][quiz] < low)
        low = grades[student][quiz];
    }
    printf("%3d    %3d   %3d\n", total / NUM_STUDENTS, high, low);
  }

  return 0;
}





