 /*************************************************************************
 *                   Mureithi David Wachira                               *
 *                   P15/2204/2011                                        *
 *                                                                        *
 *                   University of Nairobi                                *
 *                   School of Computing & Informatics                    *
 *                                                                        *
 *                   Course: PROGRAMMING AND PROBLEM SOLVING  (CSC 121)   *
 *                   Date:   Thursday 28th March 2013                     *
 *                                                                        *
 *                   A program that has a function to search              *
 *                   per character in an array and return:                *
 *                         - Yes, if the character is found               *
 *                   	   - No, if the character is not found            *
 *                   Function provided with array with constant           *
 *                   data objects, constant pointer			              *
 *                                                                        *
 *                   Main program:                                        *
 *                       -To request user  for character to search        *
 *                       -To tell user whether character found or not     *
 *                                                                        *
 *************************************************************************/

 #include <stdio.h> /* C Standard Input and Output Library*/
 #define array_size 40 /* Constant size of the array to be searched*/

 /*Variable declarations*/
 const char array_to_be_searched[array_size]="Today is a good day";
 char search_character;
 const char *pointer_search_character;
 int array_search_counter;
 char return_after_search;

 /* Prototyping of functions*/
 char search_array_for_character(const char *pointer_search_character);

 int main() /* The main method*/
 {   /* Brief details on the screen about the program*/
     printf(" /*************************************************************************\n *                   Mureithi David Wachira                               *\n *                   P15/2204/2011                                        *\n *                                                                        *\n *                   University of Nairobi                                *\n *                   School of Computing & Informatics                    *\n *                                                                        *\n *                   Course: PROGRAMMING AND PROBLEM SOLVING  (CSC 121)   *\n *                   Date:   Thursday 28th March 2013                     *\n *                                                                        *\n *                   A program that has a function to search              *\n *                   per character in an array and return:                *\n *                         - Yes, if the chracter is found                *\n *                   	   - No, if the character is not found            *\n *                   Function provided with array with constant           *\n *                   data objects, constant pointer.		          *\n *                   Main program:                                        *\n *                       -To request user  for character to search        *\n *                       -To tell user whether character found or not     *\n *                                                                        *\n *************************************************************************/\n");


    printf("Please enter the character to be searched :\n");/* Prompt to instruct use to enter the character to be searched*/
    scanf("%c",&search_character);                          /* Capture of the search character by the system*/

    pointer_search_character=&search_character;          /* Providing the pointer with the location(address) of the search character*/

    search_array_for_character(pointer_search_character);/* Calling the function search_array_for_character and passing to it the pointer_search_character as a parameter*/

     return 0;/* An indication that the program runs successfully*/
 } /* The end of the main method*/


char search_array_for_character(const char *pointer_search_character)
{
    for(array_search_counter=0;array_search_counter<array_size; array_search_counter++)
    {
        if(array_to_be_searched[array_search_counter]==*pointer_search_character)
        {
            printf("\nCharacter \"%c\" found at position %d in the phrase \"Today is a good day\"\n\n",*pointer_search_character, (array_search_counter+1), array_to_be_searched);
            return 0;
        }
     }

    printf("\nCharacter \"%c\" not found in the phrase \"Today is a good day\"\n\n",*pointer_search_character);
    return 0;
}
