// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[100001];
//     scanf("%s",&s); //helloworld

//     // char s[i];
//     // for(int i=0;i<s;i++)
//     // {
//     //     scanf("%d",&s[i]);
//     // }
//     int length= strlen(s);
//     int consonant=0;
//     for(int i=0;i<length;i++)
//     {
//         if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
//         {
//             consonant++;
//         }
//     }
//     printf("%d",consonant);
//     return 0;
// }
#include<stdio.h>
int main()
{
    char s[100001];
    scanf("%s",&s); //helloworld
    // char s[i];
    // for(int i=0;i<s;i++)
    // {
    //     scanf("%d",&s[i]);
    // }
    int length= strlen(s);
    int consonant=0;
    for(int i=0;i<s[i];i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
        {
            consonant++;
        }
    }
    printf("%d",consonant);
    return 0;
}