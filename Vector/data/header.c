#include<stdio.h>
#include<malloc.h>
#include<string.h>
typedef struct student
{
  int roll;
  char name[30];
  float marks;
  struct student *next;
}ST;
   void add_begin(ST **);
   void print(ST*);
   void save(ST *);
   int count(ST *);
