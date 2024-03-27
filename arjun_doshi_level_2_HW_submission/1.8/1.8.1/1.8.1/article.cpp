/*
Author: @arjundoshi221
Date: 03/27/24
Purpose: Print the contents of a struct Article, including article number, quantity, and description.
Version: 1.0
*/

#include <stdio.h>

// Define LENGTH as 20 if it's not already defined, to specify the max length of the description in Article.
#ifndef LENGTH
#define LENGTH 20
#endif

// Define the structure for an Article.
typedef struct
{
    int articleNumber;            // Unique identifier for the article.
    int quantity;                 // Quantity of the article.
    char description[LENGTH + 1]; // Description of the article, allowing for LENGTH characters + 1 for null terminator.
} Article;

// Function declaration for Print, which takes a pointer to an Article structure.
void Print(Article *p);

int main()
{
    // Initialize an instance of Article with specific values.
    Article myArticle = {5, 50, "C++ Certification"};

    // Call the Print function and pass the address of myArticle to it.
    Print(&myArticle);

    // Indicate that the program ended successfully.
    return 0;
}

// Define the Print function to print the contents of an Article.
void Print(Article *p)
{
    // Print the article number using pointer access.
    printf("Article Number: %d\n", p->articleNumber);

    // Print the quantity of the article.
    printf("Quantity: %d\n", p->quantity);

    // Print the description of the article.
    printf("Description: %s\n", p->description);
}
