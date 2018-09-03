/*Playing With
Characters
Objective
This challenge will help you to learn how to take a character, a string and a sentence as input in C.
To take a single character as input, you can use scanf("%c", &ch ); and printf("%c", ch) writes a
character specified by the argument char to stdout
char ch;
scanf("%c", &ch);
printf("%c", ch);
This piece of code prints the character .
You can take a string as input in C using scanf(�%s�, s). But, it accepts string only until it finds the first
space.
In order to take a line as input, you can use scanf("%[^\n]%*c", s); where is defined as char
s[MAX_LEN] where is the maximum size of . Here, [] is the scanset character. ^\n stands
for taking input until a newline isn't encountered. Then, with this %*c , it reads the newline character and
here, the used * indicates that this newline character is discarded.
Task
You have to print the character "C" in the first line. Then print "Language" in next line. In the last line
print "Welcome To C!!" .
Input Format
First, take a character, as input.
Then take the string, as input.
Lastly, take the sentence as input.
Output Format
Print three lines of output. The first line prints the character, .
The second line prints the string, .
The third line prints the sentence, .
Sample Input 0
C
Language Welcome To C!!
Sample Output 0
C
Language Welcome To C!!*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    char s[100];
    char sen[100];
    scanf("%c", &ch );
    scanf("\n%s", s);
    scanf("\n%[^\n]%*c", sen);
     printf("%c", ch);
    printf("\n%s", s);
    printf("\n%s", sen);
    return 0;
}
