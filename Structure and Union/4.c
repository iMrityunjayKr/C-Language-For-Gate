
//Designated initialisation of structure
#include <stdio.h>
#include <string.h>
struct stu
{
    int roll;
    char name[20];
};
void main()
{
    struct stu s1
    {
        .name = "Pankaj",
        .roll = 20
    };

    struct stu s2
    {
        
         .name = "Neeraj",
        .roll = 30
    };
    // strcpy(s1.name,"Pankaj");
    // strcpy(s2.name,"Neeraj");
    printf("%d\n", s1.roll);
    printf("%s\n", s1.name);
    printf("%d\n", s2.roll);
    printf("%s\n", s2.name);
}