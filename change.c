#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define n 20
char stack[n];
int top = -1;
void push(char ch)
{
    stack[++top] = ch;
}
char pop()
{
    return stack[top--];
}
void strreverse(char *s)
{
    int start, end;
    char temp;
    start = 0;
    end = strlen(s) - 1;
    while (start < end)
    {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}
int precedence(char ch)
{
    if (ch == '(')
        return 0;
    else if (ch == ')')
        return 1;
    else if (ch == '+' || ch == '-')
        return 2;
    else if (ch == '*' || ch == '/' || ch == '%')
        return 3;
    else if (ch == '^')
        return 4;
    //return -1 as precedence() is a non void function and needs to return something when none of the obove conditions are satisfied
}
int main()
{
    char infix[n];
    char prefix[n];
    char ch;
    int i, k;
    i = 0;
    k = 0;
    printf("Enter the infix expression ");
    scanf("%s", infix);
    strreverse(infix);
    push(')');
    while (ch = infix[i++] != '\0')// as != has higher precedence than =, so infix[i++]!='\0' is checked first wihtout assigning infix[i++] to ch , hence no character gets assigned to ch. To assign infix[i++] to ch first write like-->while((ch=infix[i++])!='\0') and then check if ch!='\0'
    {
        if (ch == ')')
            push(ch);
        else if (isalnum(ch))
            prefix[k++] = ch;
        else if (ch == '(')
            while (stack[top] != ')')
            {
                prefix[k++] = pop();
                pop();// write this outside while loop
            }
        else
        {
            while (precedence(stack[top]) > precedence(ch))
            {
                prefix[k++] = pop();
                push(ch);//write this outside while loop
            }
        }
    }
    while (stack[top] != ')')
    {
        prefix[k++] = pop();
    }
    prefix[k] = '\0';
    strreverse(prefix);
    printf("Equivalent prefix expression is : %s\n ", prefix);
    return 0;
}