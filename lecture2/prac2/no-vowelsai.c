/* The method I described previoudly using strcmp() and if-else statements is useful for comparing a string in argv to a set of predefined
strings and assigning a specific number based on the result of the compariosn.
But in this case, you are trying to change specific letters in a string to numbers.

One way to accomplish this would be to use a for loop to iterate through each character of the string, and use a switch statement or an i-else
block to check if the character is one of the letters you want to replace, and replace it with the corresponding number.
*/

switch (argv[i][0])
{
    case 'a':
    case 'A':
        number = 1;
        break;
    case 'b':
    case 'B':
        number = 2;
        break;
    case 'c':
    case 'C':
        number = 3;
        break;
    // add more cases as needed
    default:
        printf("Invalid input\n");
        break;
}

int switch_letter(char *argv)
{
    switch (argv[0])
    {
        case 'a':
        case 'A':
            return 1;
        case 'b':
        case 'B':
            return 2;
        case 'c':
        case 'C':
            return 3;
        // add more cases as needed
        default:
            printf("Invalid input\n");
            return -1;
    }
}

if (strcmp(argv[i], "string") == 0)
{
    number = 1;
}
else if (strcmp(argv[i], "string2") == 0)
{
    number = 2;
}
else if (strcmp(argv[i], "string3") == 0)
{
    number = 3;
}
else
{
    printf("Invalid input\n");
}

int switch_string(char *argv)
{
    if (strcmp(argv, "string1") == 0)
    {
        return 1;
    }
    else if (strcmp(argv, "string2") == 0)
    {
        return 2;
    }
    else if (strcmp(argv, "string3") == 0)
    {
        return 3;
    }
    else
    {
        printf("Invalid input\n");
        return -1;
    }
}

char str[100];
strcpy(str, argv[i]);
for (int j = 0; j < strlen(str); j++)
{
    switch (str[j])
    {
        case 'a':
        case 'A':
            str[j] = '1';
            break;
        case 'e':
        case 'E':
            str[j] = '3';
            break;
        // add more cases as needed
        default:
            break;
    }
}

char str[100];
strcpy(str, argv[i]);
char *p = str;
while ((p = strchr(p, 'a')) != NULL)
{
    *p = '1';
}

p = str;
while ((p = strchr(p, 'e')) != NULL)
{
    *p = '3';
}